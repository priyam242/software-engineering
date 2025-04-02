-- Lab 3: Drop the publishers table from the database after verifying its structure.
drop table publishers;
drop table if exists publishers;

-- Lab 4: Create a backup of the members table and then drop the original members table.

CREATE TABLE members_backup AS SELECT * FROM member;
select * from members_backup;