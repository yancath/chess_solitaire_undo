note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MOVE_AND_CAPTURE
inherit
	ETF_MOVE_AND_CAPTURE_INTERFACE
create
	make
feature -- command
	move_and_capture(r1: INTEGER_32 ; c1: INTEGER_32 ; r2: INTEGER_32 ; c2: INTEGER_32)
		local
			r1_32: INTEGER_32
			c1_32: INTEGER_32
			r2_32: INTEGER_32
			c2_32: INTEGER_32
			command_movecap: COMMAND_MOVE_AND_CAPTURE
			parameters: ARRAY[INTEGER]
    	do
    		r1_32 := r1
    		c1_32 := c1
    		r2_32 := r2
    		c2_32 := c2
			-- perform some update on the model state
			if model.status = 0 then
				model.set_error("Game not yet started")
			else if model.status = 2 then
				model.set_error ("Game already over")
			else -- if the game started
				model.change_board_to_grid
				if (not (r1 < 5 and r1 > 0)) then
					model.set_error ("(" + r1.out + ", " + c1.out + ") not a valid slot")
				else if (not (c1 < 5 and c1 > 0)) then
					model.set_error ("(" + r1.out + ", " + c1.out + ") not a valid slot")
				else if (not (r2 < 5 and r2 > 0)) then
					model.set_error ("(" + r2.out + ", " + c2.out + ") not a valid slot")
				else if (not (c2 < 5 and c2 > 0)) then
					model.set_error ("(" + r2.out + ", " + c2.out + ") not a valid slot")
				else if model.grid.item (r1, c1) ~ "." then
					model.set_error ("Slot @ (" + r1.out + ", " + c1.out + ") not occupied")
				else if model.grid.item (r2, c2) ~ "." then
					model.set_error ("Slot @ (" + r2.out + ", " + c2.out + ") not occupied")
				else if (not model.valid_move (r1, c1, r2, c2)) then
					model.set_error ("Invalid move of " + model.grid.item (r1, c1) + " from (" + r1.out + ", " + c1.out + ") to (" + r2.out + ", " + c2.out + ")")
				else if model.blocked_move (r1, c1, r2, c2) then
					model.set_error ("Block exists between (" + r1.out + ", " + c1.out + ") and (" + r2.out + ", " + c2.out + ")")
				else
--					model.move_and_capture (r1, c1, r2, c2)
					create command_movecap.make
					create parameters.make_empty

					parameters.force (r1_32, 1)
					parameters.force (c1_32, 2)
					parameters.force (r2_32, 3)
					parameters.force (c2_32, 4)

					command_movecap.set_mc_param (parameters)
					command_movecap.execute
				end
				end
				end
				end
				end
				end
				end
				end
			end
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
