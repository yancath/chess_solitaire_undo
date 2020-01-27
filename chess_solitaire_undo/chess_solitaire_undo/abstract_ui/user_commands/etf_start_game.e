note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_START_GAME
inherit
	ETF_START_GAME_INTERFACE
create
	make
feature -- command
	start_game
		local
			command_start_game: COMMAND_START_GAME
    	do
			-- perform some update on the model state
			if
				model.status = 1
			then
				model.set_error("Game already started")
			else if model.status = 0 then
--				model.start_game
				create command_start_game.make
				command_start_game.execute
			end
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
