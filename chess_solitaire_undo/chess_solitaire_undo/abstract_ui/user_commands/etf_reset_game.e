note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_RESET_GAME
inherit
	ETF_RESET_GAME_INTERFACE
create
	make
feature -- command
	reset_game
		local
			command_reset_game: COMMAND_RESET_GAME
    	do
			-- perform some update on the model state
			if
				model.status = 0
			then
				model.set_error ("Game not yet started")
			else
				create command_reset_game.make
				command_reset_game.execute
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
