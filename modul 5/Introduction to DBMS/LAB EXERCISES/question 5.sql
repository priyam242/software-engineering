-- Lab 1: Modify the courses table by adding a column course_duration using the ALTER command.

alter table courses add column  course_duration varchar(10) not null;

-- Lab 2: Drop the course_credits column from the courses table.

alter table courses drop column course_credits;
