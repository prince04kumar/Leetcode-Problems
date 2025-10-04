# Write your MySQL query statement below

-- lets learn sql
SELECT  
    Person.firstName,
    Person.lastname,
    Address.city, 
    Address.state
FROM Person
Left join Address
on Person.personId = Address.personId;