note
	description: "Summary description for {HISTORY}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	HISTORY[G]

create {HISTORY_ACCESS}
	make

feature -- constructor
	make
		do
			create history_list.make
			cursor := 1
		end

feature --attributes
	history_list: LINKED_LIST[G]
	cursor: INTEGER

feature -- commands
	restart_cursor
	do
		cursor := 1
		create history_list.make
	end

	put (command : G)
	do
		history_list.extend (command)
		cursor := history_list.count
		history_list.forth
	end

	back
	do
		history_list.back
		cursor := cursor - 1
	end

	forth
	do
		history_list.forth
		cursor := cursor + 1
	end

	remove_all_right
	local
		last: BOOLEAN
	do
		from
			last := is_last
		until
			last = True
		loop
			history_list.remove_right
			last := is_last
		end
	end

	on_item : BOOLEAN
	do
		Result:= history_list.valid_index (cursor) AND not empty
	end

feature -- queries
	count : INTEGER
	do
		Result := history_list.count
	end

	empty : BOOLEAN
	do
		Result := history_list.is_empty
	end

	is_first : BOOLEAN
	do
		Result := history_list.isfirst
	end

	is_last : BOOLEAN
	do
		Result := cursor = history_list.count
	end

	before : BOOLEAN
	do
		Result := history_list.before
	end

	after : BOOLEAN
	do
		Result := history_list.after
	end

	current_index : INTEGER
	do
		Result := cursor
	end

	item_at (index: INTEGER) : G
	do
		Result := history_list[index]
	end

	item : G
	require
		on_item_is_true: on_item
	do
		Result := history_list[cursor]
	end

end
