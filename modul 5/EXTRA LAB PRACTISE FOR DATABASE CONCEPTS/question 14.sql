-- Lab 3: Perform an INNER JOIN between books and authors tables to display the title
-- of books and their respective authors' names.

select authors.author_id,books.title,books.author from books inner join authors on 
book_id=author_id;

-- Lab 4: Use a FULL OUTER JOIN to retrieve all records from the books and authors tables,
-- including those with no matching entries in the other table.

select * from books b left join authors a on b.author=a.first_name 
union
select * from books b right join authors a on b.author=a.first_name;
