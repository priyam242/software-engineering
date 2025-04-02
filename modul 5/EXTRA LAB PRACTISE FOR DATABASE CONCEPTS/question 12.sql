--  Lab 3: Revoke the INSERT privilege from the user librarian on the books table.

grant insert on library_db.books to librarian;

revoke insert on library_db.books from librarian;

--  Lab 4: Revoke all permissions from user admin on the members table.

grant select on library_db.books to librarian;

grant insert,update on library_db.member to librarian;
