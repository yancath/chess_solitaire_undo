note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_UNDO
inherit
	ETF_UNDO_INTERFACE
create
	make
feature -- command
	undo
		local
			history : HISTORY[COMMAND]
			history_access : HISTORY_ACCESS
    	do
    		history := history_access.m
			if history.before OR history.empty then
				model.set_error ("Nothing to undo")
			else
				history.item.undo
			end
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
