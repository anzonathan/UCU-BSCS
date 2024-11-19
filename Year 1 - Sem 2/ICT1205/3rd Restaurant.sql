CREATE DATABASE restauant;

USE restaurant;

-- -----------------------------------------------------
-- Table orders
-- -----------------------------------------------------
CREATE TABLE orders (
  order_ID INT PRIMARY KEY AUTO_INCREMENT,
  date  DATE NOT NULL,
  order_status  VARCHAR(45) NOT NULL
  ); 

 ALTER TABLE orders DROP COLUMN date;
 ALTER TABLE orders ADD COLUMN date_of_purchase VARCHAR(50);

-- -----------------------------------------------------
-- Table payments
-- -----------------------------------------------------
CREATE TABLE payments (
  payment_ID INT PRIMARY KEY AUTO_INCREMENT,
  payment_method VARCHAR(45) NOT NULL,
  orders_order_ID INT UNIQUE
  );


-- -----------------------------------------------------
-- Table Customers
-- -----------------------------------------------------
CREATE TABLE Customers (
  customer_ID INT PRIMARY KEY AUTO_INCREMENT,
  first_name VARCHAR(45) NOT NULL,
  last_name VARCHAR(45) NULL,
  phone_number VARCHAR(10) NULL,
  customer_cat VARCHAR(45) NOT NULL,
  orders_order_ID INT  UNIQUE,
  payments_payment_ID INT  UNIQUE,
  payments_orders_order_ID INT UNIQUE,
  CONSTRAINT fk_orders FOREIGN KEY (orders_order_ID) REFERENCES orders (order_ID),
  CONSTRAINT fk_payments FOREIGN KEY (payments_payment_ID) REFERENCES payments (payment_ID),
  CONSTRAINT fk_payments_orders_order FOREIGN KEY (payments_orders_order_ID) REFERENCES payments (orders_order_ID)
  
);


-- -----------------------------------------------------
-- Table menu
-- -----------------------------------------------------
CREATE TABLE menu (
  food_ID INT UNSIGNED PRIMARY KEY,
  food_name  VARCHAR(100) NOT NULL,
  food_status  VARCHAR(45) NOT NULL,
  food_category VARCHAR(45) NOT NULL
  );

  

-- -----------------------------------------------------
-- Table staff
-- -----------------------------------------------------
CREATE TABLE staff (
  staff_ID INT PRIMARY KEY,
  first_name VARCHAR(45) NOT NULL,
  last_name VARCHAR(45) NULL,
  phone_number VARCHAR(10) NOT NULL UNIQUE,
  role VARCHAR(45) NOT NULL,
  orders_order_ID INT NOT NULL UNIQUE ,
   CONSTRAINT fk_staff_orders FOREIGN KEY (orders_order_ID) REFERENCES orders (order_ID)
   
    );

ALTER TABLE staff DROP COLUMN role;

ALTER TABLE staff ADD COLUMN department VARCHAR(45);

-- -----------------------------------------------------
-- Table invetory
-- -----------------------------------------------------
CREATE TABLE invetory (
  invetory_ID INT PRIMARY KEY ,
  item_name VARCHAR(100) NOT NULL,
  item_status VARCHAR(45) NOT NULL,
  units INT NULL,
  unit_cost INT NOT NULL,
  staff_staff_ID INT UNIQUE,
  CONSTRAINT fk_invetory_staff FOREIGN KEY (staff_staff_ID) REFERENCES staff (staff_ID) 
);

ALTER TABLE invetory 
ADD COLUMN supplier_supplier_ID INT,
ADD CONSTRAINT fk_invetory_supplier FOREIGN KEY (supplier_supplier_ID) REFERENCES supplier (supplier_ID);

-- -----------------------------------------------------
-- Table supplier
-- -----------------------------------------------------
CREATE TABLE  supplier (
  supplier_ID INT  PRIMARY KEY,
  first_name VARCHAR(45) NOT NULL,
  last_name VARCHAR(45) NULL,
  phone_number VARCHAR(10) NOT NULL,
  supply_category VARCHAR(45) NOT NULL,
  invetory_invetory_ID INT NOT NULL UNIQUE,
  CONSTRAINT fk_supplier_invetory FOREIGN KEY (invetory_invetory_ID)REFERENCES invetory (invetory_ID)
    );

ALTER TABLE supplier DROP CONSTRAINT fk_supplier_invetory;
ALTER TABLE supplier DROP COLUMN invetory_invetory_ID;

-- -----------------------------------------------------
-- Table order_details
-- -----------------------------------------------------
CREATE TABLE order_details (
  orders_order_ID INT PRIMARY KEY ,
  menu_food_ID INT UNSIGNED UNIQUE,
  food_units INT NOT NULL,
  unit_cost INT NOT NULL,
  CONSTRAINT fk_orders_has_menu_orders1 FOREIGN KEY (orders_order_ID) REFERENCES orders (order_ID),
  CONSTRAINT fk_orders_has_menu_menu1 FOREIGN KEY (menu_food_ID) REFERENCES menu (food_ID)
    );



ALTER TABLE menu ADD COLUMN (day_of_the_week VARCHAR(20));

ALTER TABLE customers ADD CONSTRAINT CHECK(LENGTH(phone_number) <= 10);

ALTER TABLE staff ADD CONSTRAINT CHECK(LENGTH(phone_number) <= 10);

ALTER TABLE supplier ADD CONSTRAINT CHECK(LENGTH(phone_number) <= 10);

ALTER TABLE customers AUTO_INCREMENT = 89001;

ALTER TABLE orders AUTO_INCREMENT = 3308001;

ALTER TABLE payments AUTO_INCREMENT = 87001;

INSERT INTO staff(staff_ID, first_name, last_name, phone_number, department) VALUES
    (1, 'MUSOKE', 'MATHIAS',0789456123,'MANAGER'),
    (2, 'WAMEMA', 'CALVIN', 0756234567, 'WAITER'),
    (3, 'NALUYANGE', 'BRENDA', 0788444232, 'WAITRESS'),
    (4, 'FATUMA', 'ASAF', 0789667888, 'CASHIER'),
    (5, 'MUKISA', 'MARIA', 0789555444, 'CHEF');

INSERT INTO invetory VALUES
    (501,'Potatoes','available', 100, 10000, 345),
    (502,'Plates','available', 540, 2500, 346),
    (503,'Firewood','unavailable',0 ,0 ,346),
    (504,'Salt','available', 100, 1000, 345),
    (505,'Royco','unavailable',0 , 0, 345);
;

INSERT INTO supplier VALUES
    (345, 'MUGISHA', 'MICHAEL', 0778932123, 'FOOD_STUFF'),
    (346, 'MUTESI', 'JACKIE', 0766342745, 'UTILITIES');

INSERT INTO menu VALUES 
(101, 'Katogo', 'available', 'breakfast', 'Monday'),
(102, 'Pizza', 'available', 'breakfast', 'Tuesday'),
(103, 'Chicken', 'available', 'lunch', 'Monday'),
(104, 'Beans', 'available', 'lunch', 'Friday');

INSERT INTO payments(payment_method, orders_order_ID) VALUES 
    ('CASH', 3308001),
    ('CASH', 3308002),
    ('MOBILE MONEY', 3308003),
    ('MOBILE MONEY', 3308004);

INSERT INTO customers(first_name, last_name, phone_number, customer_cat, orders_order_ID, payments_payment_ID) VALUES
    ('KOBUMANZI', 'MARTHA', 0786555333, 'WALK_IN', 3308001, 87001),
    ('ATURINDA', 'PATRICIA', 0786994333, 'WALK_IN', 3308002,87002),
    ('NANKYA', 'MELLISA', 0786908765, 'SUBSCRIBER', 3308003, 87003),
    ('MUSOKE', 'JIMMY', 0704321123, 'CREDIT_ACCOUNT', 3308004, 87004);

INSERT INTO orders(date_of_purchase, order_status) VALUES
    ('Aug_20th,Wed_2024', 'DELIVERED'),
    ('Nov_19th,Tue_2024', 'PENDING'),
    ('March_8th,Tue_2024', 'DELIVERED'),
    ('Nov_19th,Tue_2024', 'PENDING');

INSERT INTO order_details(orders_order_ID, menu_food_ID, food_units, unit_cost) VALUES
    (3308001, 102,2,30000),
    (3308002, 104,2,15000),
    (3308003, 101,4,4500),
    (3308004, 103,1,3000);

CREATE VIEW record_extract AS
SELECT 
  customers.first_name,
  orders.date_of_purchase,
  payments.payment_method
FROM
  customers 
JOIN
  orders ON orders.order_ID = payments.payment_ID;

  
