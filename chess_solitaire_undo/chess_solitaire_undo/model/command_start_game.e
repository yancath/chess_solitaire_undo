note
	description: "Summary description for {COMMAND_START_GAME}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COMMAND_START_GAME

inherit
	COMMAND
		redefine
			execute, undo, redo
		end

create
	make

feature
	execute
	do
		if model.piece_count = 1 then
			model.set_status (2)
			model.set_game_over ("You Win!")
		else if model.piece_count = 0 then
			model.set_status (2)
			model.set_game_over ("You Lose!")
		else
			model.set_status(1)
		end
		end
		Precursor
	end

	undo
	do
		model.set_status (0)
		Precursor
	end

	redo
	do
		model.set_status (1)
	end


end
