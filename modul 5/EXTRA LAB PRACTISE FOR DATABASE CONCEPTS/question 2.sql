-- Lab 3: Retrieve all members who joined the library before 2022. Use appropriate SQL syntax
-- with WHERE and ORDER BY.

use library_db;
select * from member where date_of_membership='2022-01-01' order by date_of_membership;

-- Lab 4: Write SQL queries to display the titles of books published by a specific author. Sort the
-- results by year_of_publication in descending order.

select * from books where author in('priyam','alfred','aditya') order by  year_of_publication desc;