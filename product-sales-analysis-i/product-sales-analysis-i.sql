# Write your MySQL query statement below
# prod name, year price

select Product.product_name, Sales.year, Sales.price 
from Product right join Sales
On Product.product_id = Sales.product_id;