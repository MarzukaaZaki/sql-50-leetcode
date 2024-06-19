# Write your MySQL query statement below
SELECT c.id
FROM Weather c
INNER JOIN Weather p
ON DATEDIFF(c.recordDate, p.recordDate) = 1
WHERE c.temperature > p.temperature;
