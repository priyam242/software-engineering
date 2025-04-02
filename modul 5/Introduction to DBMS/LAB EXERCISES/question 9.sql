-- Lab 1: Create two new users user1 and user2 and grant user1 permission to SELECT from the courses table.

create role admin;
create user user1 identified by 'uesr@123' default role admin;
create user user2 identified by 'uesr2@123' default role admin;

grant select on school_db.courses to user1;

-- Lab 2: Revoke the INSERT permission from user1 and give it to user2.

grant insert on school_db.courses to user1;
revoke insert on school_db.courses from user1;
grant insert on school_db.courses to user2;
