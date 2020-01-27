note
	description: "Summary description for {HISTORY_ACCESS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

expanded class
	HISTORY_ACCESS

feature
	m: HISTORY[COMMAND]
		once
			create Result.make
		end

invariant
	m = m

end
