-- Lab 1: Insert three records into the courses table using the INSERT command.

insert into courses values(1,"BCA","3years"),(2,"B.TECH","4years"),(3,"B.COM","3years");

-- Lab 2: Update the course duration of a specific course using the UPDATE command.

update courses set course_duration="4years" where course_id=1;

-- Lab 3: Delete a course with a specific course_id from the courses table using the DELETE command.

delete from courses where course_id=5;