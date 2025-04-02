--  Lab 3: Add a new column genre to the books table. Update the genre for all existing records.

alter table books add column genre varchar(45);

update books set genre='Mystery' where book_id = 1;
update books set genre='Comdey' where book_id = 2;
update books set genre='action' where book_id = 3;
update books set genre='horror' where book_id = 4;
update books set genre='Romance' where book_id = 5;

select * from books;
-- Lab 4: Modify the members table to increase the length of the email column to 100 characters.

alter table member modify email varchar(100) ; 