note
	description: "A default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	CHESS_SOLITAIRE

inherit
	ANY
		redefine
			out
		end

create {CHESS_SOLITAIRE_ACCESS}
	make

feature {NONE} -- Initialization
	make
			-- Initialization for `Current'.
		do
			create s.make_empty
			i := 0

			create error.make_empty
			create captured.make
			create grid.make_filled (".", 4, 4) -- actual game state
			create temp_board.make_filled (".", grid.height, grid.width) -- for move sets
			create out_board.make_filled (".", grid.height, grid.width) -- for outputting
			create test.make_filled ("-", grid.height, grid.width) -- for outputting
			status := 0 --game not yet started
			create game_over.make_empty

			out_board.compare_references
			grid.compare_references
			temp_board.compare_references
		end

feature -- implementation
	grid: ARRAY2[STRING]
	temp_board: ARRAY2[STRING]
	out_board: ARRAY2[STRING]
	test: ARRAY2[STRING]
	status: INTEGER -- status 0 = didnt start; status 1 = game started; status 2 = game over
	error: STRING
	piece_count: INTEGER
	game_over: STRING
	captured: LINKED_LIST[STRING]

feature -- model attributes
	s : STRING
	i : INTEGER

feature -- chess piece helper commands
	chess_type (chess_piece: INTEGER) : STRING
		do
			create Result.make_empty

			if chess_piece = 1 then
				Result := "K"
			else if chess_piece = 2 then
				Result := "Q"
			else if chess_piece = 3 then
				Result := "N"
			else if chess_piece = 4 then
				Result := "B"
			else if chess_piece = 5 then
				Result := "R"
			else if chess_piece = 6 then
				Result := "P"
			end
			end
			end
			end
			end
			end
		end
feature -- model operations
	default_update
			-- Perform update to the model state.
		do
			i := i + 1
		end

	change_board_to_grid
		do
			out_board := grid
		end

	reset
			-- Reset model state.
		do
			make
			piece_count := 0
		end

	start_game
		do
			if Current.piece_count = 1 and Current.status = 0 then
				status := 2
				game_over := "You Win!"
			else
				status := 1
			end

			if Current.piece_count = 0 then
				status := 2
				game_over := "You Lose!"
			else
				status := 1
			end
		end

	setup_chess (piece: INTEGER; row: INTEGER; col:INTEGER)
		do
			grid.put (chess_type(piece), row, col)
			out_board := grid
			piece_count := piece_count + 1
		end

	move_and_capture (r1: INTEGER_32 ; c1: INTEGER_32 ; r2: INTEGER_32 ; c2: INTEGER_32)
		do
			captured.extend (grid.item (r2, c2))

			if out_board = temp_board then
				piece_count := piece_count - 1
				grid.put (grid.item (r1, c1), r2, c2) -- move to new position
				grid.put (".", r1, c1) -- clear old position

				out_board := grid

				if Current.piece_count = 1 then
					status := 2
					game_over := "You Win!"
				end

				if not Current.loser and status /= 2 then
					status := 2
					game_over := "You Lose!"
				end
			else
				piece_count := piece_count - 1
				grid.put (grid.item (r1, c1), r2, c2) -- move to new position
				grid.put (".", r1, c1) -- clear old position

				out_board := grid

				if Current.piece_count = 1 then
					status := 2
					game_over := "You Win!"
				end

				if not Current.loser and status /= 2 then
					status := 2
					game_over := "You Lose!"
				end
			end
		end

	moves (row: INTEGER; col: INTEGER)
		do
			temp_board.fill_with (".") --clear off board

			if grid.item (row, col) ~ "R" then
				out_board := rook_moves (row, col)
			end

			if grid.item (row, col) ~ "B" then
				out_board := bishop_moves (row, col)
			end

			if grid.item (row, col) ~ "Q" then
				out_board := queen_moves (row, col)
			end

			if grid.item (row, col) ~ "P" then
				out_board := pawn_moves (row, col)
			end

			if grid.item (row, col) ~ "K" then
				out_board := king_moves (row, col)
			end

			if grid.item (row, col) ~ "N" then
				out_board := knight_moves (row, col)
			end

		end

feature -- auxiliary move sets
	knight_moves (row: INTEGER; col: INTEGER): ARRAY2[STRING]
		local
			row_c, col_c : INTEGER
		do
			from
				row_c := 1
			until
				row_c > grid.height
			loop
				from
					col_c := 1
				until
					col_c > grid.width
				loop
					if Current.valid_move (row, col, row_c, col_c) then
						temp_board.put ("+", row_c, col_c)
					end

					col_c := col_c + 1
				end
				row_c := row_c + 1
			end
			temp_board.put ("N", row, col)
			Result := temp_board
		end

	pawn_moves (row: INTEGER; col: INTEGER): ARRAY2[STRING]
		do
			if row > 1 and col = 1 then
				temp_board.put ("+", row - 1, col + 1)
			else if row > 1 and col = 4 then
				temp_board.put ("+", row - 1, col - 1)
			else if (row > 1 and col > 1) then
				temp_board.put ("+", row - 1, col + 1)
				temp_board.put ("+", row - 1, col - 1)
			end
			end
			end

			temp_board.put ("P", row, col)
			Result := temp_board
		end

	king_moves (row: INTEGER; col: INTEGER): ARRAY2[STRING]
		do
			if (row = 1 and col = 1) then
				temp_board.put ("+", row + 1, col)
				temp_board.put ("+", row + 1, col + 1)
				temp_board.put ("+", row, col + 1)
			end

			if row = 4 and col = 1 then
				temp_board.put ("+", row - 1, col)
				temp_board.put ("+", row - 1, col + 1)
				temp_board.put ("+", row, col + 1)
			end

			if row = 1 and col = 4 then
				temp_board.put ("+", row, col - 1)
				temp_board.put ("+", row + 1, col - 1)
				temp_board.put ("+", row + 1, col)
			end

			if row = 4 and col = 4 then
				temp_board.put ("+", row - 1, col)
				temp_board.put ("+", row - 1, col - 1)
				temp_board.put ("+", row, col - 1)
			end

			if (row = 1 and col = 2) or (row = 1 and col = 3) then
				temp_board.put ("+", row, col - 1)
				temp_board.put ("+", row, col + 1)
				temp_board.put ("+", row + 1, col)
				temp_board.put ("+", row + 1, col + 1)
				temp_board.put ("+", row + 1, col - 1)
			end

			if (row = 2 and col = 1) or (row = 3 and col = 1) then
				temp_board.put ("+", row - 1, col)
				temp_board.put ("+", row + 1, col + 1)
				temp_board.put ("+", row - 1, col + 1)
				temp_board.put ("+", row, col + 1)
				temp_board.put ("+", row + 1, col + 1)
				temp_board.put ("+", row + 1, col)
			end

			if (row = 3 and col = 4) or (row = 2 and col = 4) then
				temp_board.put ("+", row + 1, col)
				temp_board.put ("+", row - 1, col - 1)
				temp_board.put ("+", row, col - 1)
				temp_board.put ("+", row + 1, col - 1)
				temp_board.put ("+", row - 1, col)
			end

			if (row = 4 and col = 2) or (row = 4 and col = 3) then
				temp_board.put ("+", row - 1, col)
				temp_board.put ("+", row, col + 1)
				temp_board.put ("+", row, col - 1)
				temp_board.put ("+", row - 1, col + 1)
				temp_board.put ("+", row - 1, col - 1)
			end

			if (row > 1 and row < 4 )and (col > 1 and col < 4) then
				temp_board.put ("+", row - 1, col - 1)
				temp_board.put ("+", row - 1, col)
				temp_board.put ("+", row - 1, col + 1)
				temp_board.put ("+", row, col + 1)
				temp_board.put ("+", row + 1, col + 1)
				temp_board.put ("+", row + 1, col)
				temp_board.put ("+", row + 1, col - 1)
				temp_board.put ("+", row, col - 1)
			end

			temp_board.put ("K", row, col)
			Result := temp_board
		end


	rook_moves (row: INTEGER; col: INTEGER): ARRAY2[STRING]
		local
			row_c, col_c : INTEGER
		do
			from
				col_c := 1
			until
				col_c > 4
			loop
				temp_board.put ("+", row, col_c)
				col_c := col_c + 1
			end

			from
				row_c := 1
			until
				row_c > 4
			loop
				temp_board.put ("+", row_c, col)
				row_c := row_c + 1
			end
			temp_board.put ("R", row, col)
			Result := temp_board
		end

	bishop_moves (row: INTEGER; col: INTEGER): ARRAY2[STRING]
		local
--			temp_board : ARRAY2[STRING]
			row_c, col_c : INTEGER
		do
--			create temp_board.make_filled (".", 4, 4)

			from --diagonal going to upper right
				row_c := row
				col_c := col
			until
				row_c < 1 or col_c > temp_board.width
			loop
				temp_board.put ("+", row_c, col_c)
				row_c := row_c - 1
				col_c := col_c + 1
			end

			from --diagonal going to lower right
				row_c := row
				col_c := col
			until
				row_c > temp_board.height or col_c > temp_board.width
			loop
				temp_board.put ("+", row_c, col_c)
				row_c := row_c + 1
				col_c := col_c + 1
			end

			from --diagonal going to lower left
				row_c := row
				col_c := col
			until
				row_c < 1 or col_c < 1
			loop
				temp_board.put ("+", row_c, col_c)
				row_c := row_c - 1
				col_c := col_c - 1
			end

			from --diagonal going to upper left
				row_c := row
				col_c := col
			until
				row_c > temp_board.height or col_c < 1
			loop
				temp_board.put ("+", row_c, col_c)
				row_c := row_c + 1
				col_c := col_c - 1
			end
			temp_board.put ("B", row, col)
			Result := temp_board
		end

	queen_moves (row: INTEGER; col: INTEGER): ARRAY2[STRING]
		local
			row_c, col_c : INTEGER
		do
			from
				col_c := 1
			until
				col_c > 4
			loop
				temp_board.put ("+", row, col_c)
				col_c := col_c + 1
			end

			from
				row_c := 1
			until
				row_c > 4
			loop
				temp_board.put ("+", row_c, col)
				row_c := row_c + 1
			end

			if row = 1 and col = 1 then
				from --diagonal going to lower right
					row_c := row
					col_c := col
				until
					row_c > temp_board.height or col_c > temp_board.width
				loop
					temp_board.put ("+", row_c, col_c)
					row_c := row_c + 1
					col_c := col_c + 1
				end
			else
				if row = 4 and col = 1 then
					from --diagonal going to upper right
						row_c := row
						col_c := col
					until
						row_c < 1 or col_c > temp_board.width
					loop
						temp_board.put ("+", row_c, col_c)
						row_c := row_c - 1
						col_c := col_c + 1
					end
				end
			end

			if row = 4 and col = 1 then
				from --diagonal going to upper right
					row_c := row
					col_c := col
				until
					row_c < 1 or col_c > temp_board.width
				loop
					temp_board.put ("+", row_c, col_c)
					row_c := row_c - 1
					col_c := col_c + 1
				end
			end

			if row = 4 and col = 4 then
				from --diagonal going to upper left
					row_c := row
					col_c := col
				until
					row_c > temp_board.height or col_c < 1
				loop
					temp_board.put ("+", row_c, col_c)
					row_c := row_c - 1
					col_c := col_c - 1
				end
			end

			if row = 1 and col = 4 then
				from --diagonal going to lower left
					row_c := row
					col_c := col
				until
					row_c < 1 or col_c < 1
				loop
					temp_board.put ("+", row_c, col_c)
					row_c := row_c + 1
					col_c := col_c - 1
				end
			end

			if (row = 1 and col = 2) or (row = 1 and col = 3) then
				from --diagonal going to lower right
					row_c := row
					col_c := col
				until
					row_c > temp_board.height or col_c > temp_board.width
				loop
					temp_board.put ("+", row_c, col_c)
					row_c := row_c + 1
					col_c := col_c + 1
				end

				from --diagonal going to lower left
					row_c := row
					col_c := col
				until
					col_c < 1
				loop
					temp_board.put ("+", row_c, col_c)
					row_c := row_c + 1
					col_c := col_c - 1
				end
			end

			if (row = 2 and col = 1) or (row = 3 and col = 1) then
				from --diagonal going to lower right
					row_c := row
					col_c := col
				until
					row_c > temp_board.height or col_c > temp_board.width
				loop
					temp_board.put ("+", row_c, col_c)
					row_c := row_c + 1
					col_c := col_c + 1
				end

				from --diagonal going to upper right
					row_c := row
					col_c := col
				until
					row_c < 1 or col_c > temp_board.width
				loop
					temp_board.put ("+", row_c, col_c)
					row_c := row_c - 1
					col_c := col_c + 1
				end
			end

			if (row = 2 and col = 4) or (row = 3 and col = 4) then
				from --diagonal going to lower left
					row_c := row
					col_c := col
				until
					row_c < 1 or col_c < 1
				loop
					temp_board.put ("+", row_c, col_c)
					row_c := row_c - 1
					col_c := col_c - 1
				end

				from --diagonal going to upper left
					row_c := row
					col_c := col
				until
					row_c > temp_board.height or col_c < 1
				loop
					temp_board.put ("+", row_c, col_c)
					row_c := row_c + 1
					col_c := col_c - 1
				end
			end

			if (row = 4 and col = 2) or (row = 4 and col = 3) then
				from --diagonal going to upper left
					row_c := row
					col_c := col
				until
					row_c > temp_board.height or col_c < 1
				loop
					temp_board.put ("+", row_c, col_c)
					row_c := row_c - 1
					col_c := col_c - 1
				end

				from --diagonal going to upper right
					row_c := row
					col_c := col
				until
					row_c < 1 or col_c > temp_board.width
				loop
					temp_board.put ("+", row_c, col_c)
					row_c := row_c - 1
					col_c := col_c + 1
				end

			end

			if (row > 1 and col > 1) and (row < 4 and col < 4) then
				from --diagonal going to upper right
					row_c := row
					col_c := col
				until
					row_c < 1 or col_c > temp_board.width
				loop
					temp_board.put ("+", row_c, col_c)
					row_c := row_c - 1
					col_c := col_c + 1
				end

				from --diagonal going to lower right
					row_c := row
					col_c := col
				until
					row_c > temp_board.height or col_c > temp_board.width
				loop
					temp_board.put ("+", row_c, col_c)
					row_c := row_c + 1
					col_c := col_c + 1
				end

				from --diagonal going to lower left
					row_c := row
					col_c := col
				until
					row_c < 1 or col_c < 1
				loop
					temp_board.put ("+", row_c, col_c)
					row_c := row_c - 1
					col_c := col_c - 1
				end

				from --diagonal going to upper left
					row_c := row
					col_c := col
				until
					row_c > temp_board.height or col_c < 1
				loop
					temp_board.put ("+", row_c, col_c)
					row_c := row_c + 1
					col_c := col_c - 1
				end
			end

			temp_board.put ("Q", row, col)
			Result := temp_board
		end
feature -- boolean queries
	valid_move (r1: INTEGER_32 ; c1: INTEGER_32 ; r2: INTEGER_32 ; c2: INTEGER_32) : BOOLEAN
		do
			if grid.item (r1, c1) ~ "K" then -- King
				if (r2 ~ r1 - 1 and c2 ~ c1 - 1) or
				   (r2 ~ r1 - 1 and c2 ~ c1) or
				   (r2 ~ r1 - 1 and c2 ~ c1 + 1) or
				   (r2 ~ r1 and c2 ~ c1 + 1) or
				   (r2 ~ r1 + 1 and c2 ~ c1 + 1) or
				   (r2 ~ r1 + 1 and c2 ~ c1) or
				   (r2 ~ r1 + 1 and c2 ~ c1 - 1) or
				   (r2 ~ r1 and c2 ~ c1 - 1)
			then
					Result := True
				else
					Result := False
				end
			end

			if grid.item (r1, c1) ~ "P" then -- Pawn
				if ((r2 ~ r1 - 1) and (c2 ~ c1 + 1 or c2 ~ c1 - 1)) then
					Result := True
				else
					Result := False
				end
			end

			if grid.item (r1, c1) ~ "R" then -- Rook
				if r2 ~ r1 xor c2 ~ c1 then -- XOR because OR is true when both are true (not the case here)
					Result := True
				else
					Result := False
				end
			end

			if grid.item (r1, c1) ~ "B" then -- Bishop
				if
				 	((r2 ~ r1 + 1 and c2 ~ c1 + 1) or
				 	(r2 ~ r1 - 1 and c2 ~ c1 - 1) or
				 	(r2 ~ r1 + 1 and c2 ~ c1 - 1) or
				 	(r2 ~ r1 - 1 and c2 ~ c1 + 1) or

				 	(r2 ~ r1 + 2 and c2 ~ c1 + 2) or
				 	(r2 ~ r1 - 2 and c2 ~ c1 - 2) or
				 	(r2 ~ r1 + 2 and c2 ~ c1 - 2) or
				 	(r2 ~ r1 - 2 and c2 ~ c1 + 2) or

				 	(r2 ~ r1 + 3 and c2 ~ c1 + 3) or
				 	(r2 ~ r1 - 3 and c2 ~ c1 - 3) or
				 	(r2 ~ r1 + 3 and c2 ~ c1 - 3) or
				 	(r2 ~ r1 - 3 and c2 ~ c1 + 3))
				then
					Result := True
				else
					Result := False
				end
			end

			if grid.item (r1, c1) ~ "N" then -- Knight
				if
					(r2 ~ r1 + 1 and c2 ~ c1 + 2) or
					(r2 ~ r1 + 1 and c2 ~ c1 - 2) or
					(r2 ~ r1 - 1 and c2 ~ c1 + 2) or
					(r2 ~ r1 - 1 and c2 ~ c1 - 2) or
					(r2 ~ r1 + 2 and c2 ~ c1 + 1) or
					(r2 ~ r1 + 2 and c2 ~ c1 - 1) or
					(r2 ~ r1 - 2 and c2 ~ c1 + 1) or
					(r2 ~ r1 - 2 and c2 ~ c1 - 1)
				then
					Result := True
				else
					Result := False
				end
			end

			if grid.item (r1, c1) ~ "Q" then -- Queen
				if
					((r2 ~ r1 + 1 and c2 ~ c1 + 1) or (r2 ~ r1 - 1 and c2 ~ c1 - 1) or
					(r2 ~ r1 + 1 and c2 ~ c1 - 1) or (r2 ~ r1 - 1 and c2 ~ c1 + 1) or

					(r2 ~ r1 + 2 and c2 ~ c1 + 2) or (r2 ~ r1 - 2 and c2 ~ c1 - 2) or
					(r2 ~ r1 + 2 and c2 ~ c1 - 2) or (r2 ~ r1 - 2 and c2 ~ c1 + 2) or

					(r2 ~ r1 + 3 and c2 ~ c1 + 3) or (r2 ~ r1 - 3 and c2 ~ c1 - 3) or
					(r2 ~ r1 + 3 and c2 ~ c1 - 3) or (r2 ~ r1 - 3 and c2 ~ c1 + 3) or

					(r2 ~ r1 + 4 and c2 ~ c1 + 4) or (r2 ~ r1 - 4 and c2 ~ c1 - 4) or
					(r2 ~ r1 + 4 and c2 ~ c1 - 4) or (r2 ~ r1 - 4 and c2 ~ c1 + 4)) or (r2 ~ r1 xor c2 ~ c1)
				then
					Result := True
				else
					Result := False
				end
			end
		end

	-- this is only split off to make implementing queen being blocked easier
	blocking_bishop (r1: INTEGER_32 ; c1: INTEGER_32 ; r2: INTEGER_32 ; c2: INTEGER_32) : BOOLEAN
		local
			row_cursor, col_cursor: INTEGER
		do
				if r1 > r2 and c1 > c2 then
					from
						row_cursor := r1 - 1
						col_cursor := c1 - 1
					until
						row_cursor ~ r2 and col_cursor ~ c2
					loop
						if grid.item (row_cursor, col_cursor) /~ "." then
							Result := True
						end
						row_cursor := row_cursor - 1
						col_cursor := col_cursor - 1
					end
				end

				if r1 < r2 and c1 < c2 then
					from
						row_cursor := r1 + 1
						col_cursor := c1 + 1
					until
						row_cursor ~ r2 and col_cursor ~ c2
					loop
						if grid.item (row_cursor, col_cursor) /~ "." then
							Result := True
						end
						row_cursor := row_cursor + 1
						col_cursor := col_cursor + 1
					end
				end

				if r1 > r2 and c1 < c2 then
					from
						row_cursor := r1 - 1
						col_cursor := c1 + 1
					until
						row_cursor ~ r2 and col_cursor ~ c2
					loop
						if grid.item (row_cursor, col_cursor) /~ "." then
							Result := True
						end
						row_cursor := row_cursor - 1
						col_cursor := col_cursor + 1
					end
				end

				if r1 < r2 and c1 > c2 then
					from
						row_cursor := r1 + 1
						col_cursor := c1 - 1
					until
						row_cursor ~ r2 and col_cursor ~ c2
					loop
						if grid.item (row_cursor, col_cursor) /~ "." then
							Result := True
						end
						row_cursor := row_cursor + 1
						col_cursor := col_cursor - 1
					end
				end
		end

	-- this is only split off to make implementing queen being blocked easier
	blocking_rook (r1: INTEGER_32 ; c1: INTEGER_32 ; r2: INTEGER_32 ; c2: INTEGER_32) : BOOLEAN
		local
			row_cursor, col_cursor: INTEGER
		do
				if r1 ~ r2 then
					if c1 > c2 then
						from
							col_cursor := c1 - 1
						until
							col_cursor ~ c2
						loop
							if grid.item (r1, col_cursor) /~ "." then
								Result := True
							end
							col_cursor := col_cursor - 1
						end
					else if c1 < c2 then
						from
							col_cursor := c1 + 1
						until
							col_cursor ~ c2
						loop
							if grid.item (r1, col_cursor) /~ "." then
								Result := True
							end
							col_cursor := col_cursor + 1
						end
					end
					end
				else if c1 ~ c2 then
					if r1 > r2 then
						from
							row_cursor := r1 - 1
						until
							row_cursor ~ r2
						loop
							if grid.item (row_cursor, c1) /~ "." then
								Result := True
							end
							row_cursor := row_cursor - 1
						end
					else if r1 < r2 then
						from
							row_cursor := r1 + 1
						until
							row_cursor ~ r2
						loop
							if grid.item (row_cursor, c1) /~ "." then
								Result := True
							end
							row_cursor := row_cursor + 1
						end
					end
					end
				end
				end
		end

	blocked_move(r1: INTEGER_32 ; c1: INTEGER_32 ; r2: INTEGER_32 ; c2: INTEGER_32) : BOOLEAN
		do
			--King and Pawn cannot be blocked since he moves only one space
			if grid.item (r1, c1) ~ "K" or grid.item (r1, c1) ~ "P" then
				Result := False
			end

			if grid.item (r1, c1) ~ "Q" then -- queen is a combo of rook + bishop
				Result := Current.blocking_bishop (r1, c1, r2, c2) xor Current.blocking_rook (r1, c1, r2, c2)
			end

			if grid.item (r1, c1) ~ "B" then
				Result := Current.blocking_bishop (r1, c1, r2, c2)
			end

			if grid.item (r1, c1) ~ "R" then -- Rook
				Result := Current.blocking_rook (r1, c1, r2, c2)
			end

			if grid.item (r1, c1) ~ "N" then
				if (r2 ~ r1 + 1) and (c2 ~ c1 + 2) then
					if
						((grid.item (r1 + 1, c1) /~ ".") or (grid.item (r1 + 1, c1 + 1) /~ "."))
					then
						Result := True
					else
						Result := False
					end
				end

				if (r2 ~ r1 + 2) and (c2 ~ c1 + 1) then
					if
						((grid.item (r1 + 1, c1) /~ ".") or (grid.item (r1 + 2, c1) /~ "."))
					then
						Result := True
					else
						Result := False
					end
				end

				if (r2 ~ r1 + 1) and (c2 ~ c1 - 2) then
					if
						((grid.item (r1 + 1, c1) /~ ".") or (grid.item (r1 + 1, c1 - 1) /~ "."))
					then
						Result := True
					else
						Result := False
					end
				end

				if (r2 ~ r1 - 1) and (c2 ~ c1 + 2) then
					if
						((grid.item (r1 - 1, c1) /~ ".") or (grid.item (r1 - 1, c1 + 1) /~ "."))
					then
						Result := True
					else
						Result := False
					end
				end

				if (r2 ~ r1 + 2) and (c2 ~ c1 - 1) then
					if
						((grid.item (r1 + 1, c1) /~ ".") or (grid.item (r1 + 2, c1) /~ "."))
					then
						Result := True
					else
						Result := False
					end
				end

				if (r2 ~ r1 - 2) and (c2 ~ c1 + 1) then
					if
						((grid.item (r1 - 1, c1) /~ ".") or (grid.item (r1 - 2, c1) /~ "."))
					then
						Result := True
					else
						Result := False
					end
				end

				if (r2 ~ r1 - 1) and (c2 ~ c1 - 2) then
					if
						((grid.item (r1 - 1, c1) /~ ".") or (grid.item (r1 - 1, c1 - 1) /~ "."))
					then
						Result := True
					else
						Result := False
					end
				end

				if (r2 ~ r1 - 2) and (c2 ~ c1 + 1) then
					if
						((grid.item (r1 - 1, c1) /~ ".") or (grid.item (r1 - 2, c1) /~ "."))
					then
						Result := True
					else
						Result := False
					end
				end

				if (r2 ~ r1 - 1) and (c2 ~ c1 - 2) then
					if
						((grid.item (r1 - 1, c1) /~ ".") or (grid.item (r1 - 1, c1 - 1) /~ "."))
					then
						Result := True
					else
						Result := False
					end
				end

				if (r2 ~ r1 - 2) and (c2 ~ c1 - 1) then
					if
						((grid.item (r1 - 1, c1) /~ ".") or (grid.item (r1 - 2, c1) /~ "."))
					then
						Result := True
					else
						Result := False
					end
				end

				if (r2 ~ r1 - 1) and (c2 ~ c1 + 1) then
					if
						((grid.item (r1 - 1, c1) /~ ".") or (grid.item (r1 - 2, c1) /~ "."))
					then
						Result := True
					else
						Result := False
					end
				end
			end
		end

	loser : BOOLEAN
		local
			row_c, col_c : INTEGER
			bool : BOOLEAN
		do
			bool := False
			from
				row_c := 1
			until
				row_c > grid.height
			loop
				from
					col_c := 1
				until
					col_c > grid.width
				loop
					if grid.item (row_c, col_c) /~ "." then
						bool := Current.attack_check (row_c, col_c) or bool
					end
					col_c := col_c + 1
				end
				row_c := row_c + 1
			end
			Result := bool
		end

	attack_check (r: INTEGER; c: INTEGER) : BOOLEAN
		local
			row_c, col_c : INTEGER
			bool : BOOLEAN
		do
			bool := False

			from
				row_c := 1
			until
				row_c > grid.height
			loop
				from
					col_c := 1
				until
					col_c > grid.width
				loop
					if grid.item (row_c, col_c) /~ "." then
						bool := Current.valid_move (r, c, row_c, col_c) or bool
					end
					col_c := col_c + 1
				end
				row_c := row_c + 1
			end
			Result := bool
		end

feature -- utility
	set_error(msg: STRING)
		do
			error := msg
		end

	set_game_over(msg: STRING)
		do
			game_over := msg
		end

	print_game_board : STRING
		local
		j: INTEGER -- for line checking purposes
		do
			create Result.make_empty
			j := 1

			across
				1 |..| out_board.height as row
			loop
				across
					1 |..| out_board.width as col
				loop
					Result.append((out_board.item (row.item, col.item)).out)

					if (j \\ 4 = 0) then
							if not (j = 16) then --if its the last row, then a new line marker isn't needed
								Result.append("%N")
								Result.append("  ")
							end
					end
					j := j + 1
				end
			end
		end

feature -- for undo/redo
	set_status (input: INTEGER)
	do
		status := input
	end

	undo_status_msg
	do
		if Current.status = 2 then
			set_status (1)
		end
	end

	remove_setup (empty: STRING; row, col: INTEGER)
	do
		grid.put (".", row, col)
		out_board := grid
		piece_count := piece_count - 1
	end

	reverse_move_and_cap (r1, c1, r2, c2: INTEGER)
	do
		grid.put (grid.item (r2, c2), r1, c1)
		grid.put (captured.i_th (captured.count), r2, c2)

		captured.finish
		captured.remove

		out_board := grid
		piece_count := piece_count + 1
	end

feature -- queries
	out : STRING
		do
			create Result.make_empty

			if
				error.is_empty -- given theres no errors
			then
				Result.append ("  # of chess pieces on board: " + Current.piece_count.out)
				Result.append ("%N")

				if status = 1 then
					Result.append ("  Game In Progress...")
				else if status = 0 then
					Result.append ("  Game being Setup...")
				else if status = 2 then
					Result.append ("  Game Over: ")
					Result.append (game_over)
				end
				end
				end
				Result.append ("%N")
				Result.append ("  ")
				Result.append (print_game_board)
			else -- if there are errors print these error msgs
				Result.append ("  # of chess pieces on board: " + Current.piece_count.out)
				Result.append ("%N")
				Result.append ("  Error: ")
				Result.append (error)
				Result.append ("%N")
				Result.append ("  ")
				Result.append(print_game_board)
			end
			create error.make_empty -- clear error after output
		end

end
