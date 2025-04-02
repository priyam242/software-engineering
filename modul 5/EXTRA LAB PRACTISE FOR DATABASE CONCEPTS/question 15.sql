-- Lab 3: Group books by genre and display the total number of books in each genre.

select genre,count(*) as count_of_every_book from books group by genre; 

-- Lab 4: Group members by the year they joined and find the number of members who joined
-- each year.

select YEAR(date_of_membership) , COUNT(*) from member group by YEAR(date_of_membership);