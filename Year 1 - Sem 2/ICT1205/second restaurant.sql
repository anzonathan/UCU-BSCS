-- Active: 1728906082088@@127.0.0.1@3306@restaurant
-- Active: 1728906082088@@127.0.0.1@3306@restaurant


USE resturant;

-- -----------------------------------------------------
-- Table orders
-- -----------------------------------------------------
CREATE TABLE orders (
  order_ID INT PRIMARY KEY AUTO_INCREMENT,
  date  DATE NOT NULL,
  order_status  VARCHAR(45) NOT NULL
  ); 

 

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


