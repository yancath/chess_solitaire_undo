note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_REDO
inherit
	ETF_REDO_INTERFACE
create
	make
feature -- command
	redo
		local
			history : HISTORY[COMMAND]
			history_access : HISTORY_ACCESS
    	do
    		history := history_access.m
			if history.is_last OR history.empty then
				model.set_error ("Nothing to redo")
			else
				history.forth
				history.item.redo
			end
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
