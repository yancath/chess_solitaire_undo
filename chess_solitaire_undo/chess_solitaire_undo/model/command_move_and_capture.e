note
	description: "Summary description for {COMMAND_MOVE_AND_CAPTURE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COMMAND_MOVE_AND_CAPTURE

inherit
	COMMAND
	redefine
		execute, redo, undo
	end

create
	make

feature
	execute
	local
		r1, c1, r2, c2: INTEGER_32
	do
		r1 := move_and_cap_param[1]
		c1 := move_and_cap_param[2]
		r2 := move_and_cap_param[3]
		c2 := move_and_cap_param[4]

		model.move_and_capture(r1, c1, r2, c2)
		Precursor
	end

	undo
	do
		model.reverse_move_and_cap (move_and_cap_param[1], move_and_cap_param[2], move_and_cap_param[3], move_and_cap_param[4])
		model.undo_status_msg
		Precursor
	end

	redo
	local
		redo_command: COMMAND
		r1, c1, r2, c2: INTEGER_32
	do
		redo_command := history.item
		r1 := redo_command.move_and_cap_param[1]
		c1 := redo_command.move_and_cap_param[2]
		r2 := redo_command.move_and_cap_param[3]
		c2 := redo_command.move_and_cap_param[4]

		model.move_and_capture (r1, c1, r2, c2)

	end

end
