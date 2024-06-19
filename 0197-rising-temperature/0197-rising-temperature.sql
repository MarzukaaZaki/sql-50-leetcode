# Write your MySQL query statement below
SELECT c.id
FROM Weather c
INNER JOIN Weather p
ON DATE_SUB(c.recordDate, INTERVAL 1 DAY) = p.recordDate
WHERE c.temperature > p.temperature;
