-- Lab 3: Create a trigger to automatically update the last_modified timestamp of the
-- books table whenever a record is updated.

use library_db;
create table book_data(
    b_id int AUTO_INCREMENT primary key, 
    book_change_type varchar(10),               
    book_change_time TIMESTAMP                  
);
select * from book_data;

create trigger after_book_update
after update on books
for each row
    inset into book_data (book_change_type, book_change_time)
    values ('UPDATE', NOW());
    
update books set price=1500 where book_id=5;

-- Lab 4: Create a trigger that inserts a log entry into a log_changes table whenever a
-- DELETE operation is performed on the books table

create table log_changes(
    b_id int, 
    book_change_type varchar(10),               
    book_change_time TIMESTAMP                  
);

create trigger after_book_delete
after delete on books
for each row
    insert into log_changes (b_id, book_change_type, book_change_time)
    VALUES (old.book_id, 'delete', NOW());

delete from books where book_id=6;

select * from log_changes;
