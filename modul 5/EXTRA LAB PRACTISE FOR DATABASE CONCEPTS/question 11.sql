-- Lab 3: Grant SELECT permission to a user named librarian on the books table.

create role admin;
create user librarian identified by 'librarian@123' default role admin;
grant select on library_db.books to librarian;

-- Lab 4: Grant INSERT and UPDATE permissions to the user admin on the members table.

grant insert,update on library_db.member to librarian;
