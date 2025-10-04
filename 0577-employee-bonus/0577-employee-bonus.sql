# Write your MySQL query statement below
select  e.name , b.bonus From Bonus as b right join Employee as e on e.empId = b.empId Where b.bonus<1000 or b.bonus is null;