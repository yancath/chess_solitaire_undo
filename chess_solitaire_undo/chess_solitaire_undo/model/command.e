note
	description: "Summary description for {COMMAND}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	COMMAND

feature
	model : CHESS_SOLITAIRE
	model_access : CHESS_SOLITAIRE_ACCESS
	history: HISTORY[COMMAND]
	history_access: HISTORY_ACCESS
	param: ARRAY[INTEGER]
	move_and_cap_param: ARRAY[INTEGER]

feature
	make
	do
		model := model_access.m
		history := history_access.m
		create param.make_empty
		create move_and_cap_param.make_empty
	end

feature -- commands
	execute
		do
			if not history.is_last and not history.empty then
				history.remove_all_right
			end
			history.put (Current)
		end

	undo
		do
			history.back
		end

	redo
		do
		end

feature -- set parameters
	set_param_setup (p: like param)
	do
		param.force (p[1], 1)
		param.force (p[2], 2)
		param.force (p[3], 3)
	end

	set_param_moves (p: like param)
	do
		param.force (p[1], 1)
		param.force (p[2], 2)
	end

	set_mc_param (p: like move_and_cap_param)
	do
		move_and_cap_param.force (p[1], 1)
		move_and_cap_param.force (p[2], 2)
		move_and_cap_param.force (p[3], 3)
		move_and_cap_param.force (p[4], 4)
	end


end
