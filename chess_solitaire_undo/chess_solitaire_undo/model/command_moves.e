note
	description: "Summary description for {COMMAND_MOVES}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COMMAND_MOVES

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
		row, col: INTEGER
	do
		row := param[1]
		col := param[2]
		model.moves (row, col)
	end

	undo
	do
	end

	redo
	do
	end

end
