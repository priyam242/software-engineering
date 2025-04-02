-- Lab 3: Create a view to show only the title, author, and price of books from the books table.
 
 create view books_data as select title, author, price from books;
select * from books_data;

-- Lab 4: Create a view to display members who joined before 2020.

create view show_member as select * from member where year(date_of_membership)<2020;
select * from show_member;