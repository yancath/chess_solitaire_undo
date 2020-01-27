note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_SETUP_CHESS
inherit
	ETF_SETUP_CHESS_INTERFACE
create
	make
feature -- command
	setup_chess(c: INTEGER_32 ; row: INTEGER_32 ; col: INTEGER_32)
		require else
			setup_chess_precond(c, row, col)
		local
			piece: INTEGER_32
			row32: INTEGER_32
			col32: INTEGER_32
			parameters: ARRAY[INTEGER_32]
			command_setup_chess: COMMAND_SETUP_CHESS
    	do
			-- perform some update on the model state
			piece := c
			row32 := row
			col32 := col
			if model.status = 1 then -- if the game is already started
				model.set_error("Game already started")
			else -- if the game didn't start
				if (not (row < 5 and row > 0)) then
					model.set_error ("(" + row.out + ", " + col.out + ") not a valid slot")
				else if (not (col < 5 and col > 0)) then
					model.set_error ("(" + row.out + ", " + col.out + ") not a valid slot")
				else if model.grid.item (row, col) /~ "." then
					model.set_error ("Slot @ (" + row.out + ", " + col.out + ") already occupied")
				else
--					model.setup_chess (c, row, col)
					create command_setup_chess.make
					create parameters.make_empty

					parameters.force (piece, 1)
					parameters.force (row32, 2)
					parameters.force (col32, 3)

					command_setup_chess.set_param_setup (parameters)
					command_setup_chess.execute
				end
				end
				end
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
--occupied slot
