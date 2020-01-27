note
	description: "Summary description for {COMMAND_SETUP_CHESS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COMMAND_SETUP_CHESS

inherit
	COMMAND
	redefine
		execute, undo, redo
	end

create
	make

feature
	execute
	local
		row, col, c: INTEGER
	do
		c := param[1]
		row := param[2]
		col := param[3]
		model.setup_chess(c, row, col)
		Precursor
	end

	undo
	do
		model.remove_setup (".", param[2], param[3])
		Precursor
	end

	redo
	local
		redo_command: COMMAND
		c, row, col: INTEGER
	do
		redo_command := history.item
		c := redo_command.param[1]
		row := redo_command.param[2]
		col := redo_command.param[3]

		model.setup_chess (c, row, col)
	end

end
