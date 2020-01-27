note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MOVES
inherit
	ETF_MOVES_INTERFACE
create
	make
feature -- command
	moves(row: INTEGER_32 ; col: INTEGER_32)
		local
			command_moves: COMMAND_MOVES
			row32: INTEGER_32
			col32: INTEGER_32
			parameters: ARRAY[INTEGER_32]
    	do
			-- perform some update on the model state
			row32 := row
			col32 := col
			if model.status = 0 then
				model.set_error ("Game not yet started")
			else if model.status = 2 then
				model.set_error ("Game already over")
			else
				if (not (row < 5 and row > 0)) then
					model.set_error ("(" + row.out + ", " + col.out + ") not a valid slot")
				else if (not (col < 5 and col > 0)) then
					model.set_error ("(" + row.out + ", " + col.out + ") not a valid slot")
				else if model.grid.item (row, col) ~ "." then
					model.set_error ("Slot @ (" + row.out + ", " + col.out + ") not occupied")
				else
--					model.moves (row, col)
					create command_moves.make
					create parameters.make_empty

					parameters.force (row32, 1)
					parameters.force (col32, 2)

					command_moves.set_param_moves (parameters)
					command_moves.execute
				end
				end
				end
			end
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
