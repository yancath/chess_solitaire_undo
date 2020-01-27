note
	description: "Summary description for {COMMAND_RESET_GAME}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COMMAND_RESET_GAME

inherit
	COMMAND
	redefine
		execute, redo, undo
	end

create
	make

feature
	execute
		do
			model.reset
			history.restart_cursor
		end

	undo
		do
		end

	redo
		do
		end
end
