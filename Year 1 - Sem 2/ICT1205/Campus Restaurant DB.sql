

-- Create Campus_Restaurant_DB
-- -----------------------------------------------------
CREATE DATABASE `Campus_Restaurant_DB`;
USE `Campus_Restaurant_DB`;


-- Table Orders
-- -----------------------------------------------------
CREATE TABLE `Orders` (
  `OrdersID` INT NOT NULL,
  `Order_Category` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`OrdersID`));


-- Table `Campus Restaurant DB`.`Customer`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `Campus_Restaurant_DB`.`Customer` (
  `CustomerID` INT NOT NULL,
  `First_Name` VARCHAR(45) NOT NULL,
  `Last_Name` VARCHAR(45) NOT NULL,
  `Customer_Category` VARCHAR(45) NOT NULL,
  `Phone_Number` CHAR(10) NOT NULL,
  PRIMARY KEY (`CustomerID`));

-- Table `Campus_Restaurant_DB`.`Items`
-- -----------------------------------------------------
CREATE TABLE `Items` (
  `Item_Id` INT NOT NULL,
  `Item_Name` VARCHAR(45) NOT NULL,
  `Unit_Cost` INT NOT NULL,
  `Qty` INT NOT NULL,
  PRIMARY KEY (`Item_Id`));

-- Table `Campus_Restaurant_DB`.`Transactions`
-- -----------------------------------------------------

CREATE TABLE `Transactions` (
  `TransactionsID` INT NOT NULL,
  `Datetime` DATETIME NOT NULL,
  `Item_ID` INT NOT NULL,
  `CustomerID` INT NULL,
  `OrdersID` NOT NULL,
  PRIMARY KEY (`TransactionsID`),
  CONSTRAINT `fk_CustomerOrder` 
    FOREIGN KEY (`CustomerID`)
    REFERENCES Customer(`CustomerID`),
   CONSTRAINT `fk_Transactions_Orders` 
    FOREIGN KEY (`OrdersID`)
    REFERENCES Orders(`OrdersID`),
CONSTRAINT `fk_Transactions_Items1` 
    FOREIGN KEY (`Item_ID`)
    REFERENCES Items(`Item_ID`));


-- Inserting into customer table. 

INSERT INTO Customer VALUES(1819001,'Dorcus','Musaasizi','3 Meals x5 Subsicription','0783456123');
INSERT INTO Customer VALUES(1819002,'Michael','Kalule','3 Meals x7 Subsicription','0783456124');
INSERT INTO Customer VALUES(1819003,'Brown','Bbosa','1 Meals x7 Subsicription','0783456125');
INSERT INTO Customer VALUES(1819004,'Maria','Nankya','Reducing Balance','0783456126');
INSERT INTO Customer VALUES(1819005,'Jeremiah','Ahimbisibwe','Reducing Balance','0783456127');

-- Inserting Items. 

INSERT INTO Items VALUES(101,'Chapati',1000,1);
INSERT INTO Items VALUES(102,'Samosa',1500,1);
INSERT INTO Items VALUES(103,'Beef',12000,1);
INSERT INTO Items VALUES(104,'Sausages',3000,2);
INSERT INTO Items VALUES(105,'Peas',3000,1);
INSERT INTO Items VALUES(106,'Katogo',2500,1);

-- Inserting into Order table.
INSERT INTO Orders VALUES(12001,'Walk in');
INSERT INTO Orders VALUES(12002,'Delivery');


-- Inserting into Transactions table.

INSERT INTO Transactions VALUES(1001,'2024-11-11 13:23:44',101,1819001,12001);
INSERT INTO Transactions VALUES(1002,'2024-11-12 13:23:44',105,1819002,12001);
INSERT INTO Transactions VALUES(1003,'2024-11-13 13:23:44',103,1819003,12001);
INSERT INTO Transactions VALUES(1004,'2024-11-14 13:23:44',105,,12001,12001);
INSERT INTO Transactions VALUES(1005,'2024-11-15 13:23:44',106,1819005,12002);
INSERT INTO Transactions VALUES(1006,'2024-11-16 13:23:44',101,1819005,12002);
INSERT INTO Transactions VALUES(1007,'2024-11-17 13:23:44',103,1819004,12001);
INSERT INTO Transactions VALUES(1008,'2024-11-18 13:23:44',101,1819004,12001);

-- -----------------------------------------------------
-- Table `Campus_Restaurant_DB`.`Items_has_Orders`
-- -----------------------------------------------------
CREATE TABLE `Items_has_Orders` (
  `Item_Id` INT NOT NULL,
  `OrdersID` INT NOT NULL,
  PRIMARY KEY (`Items_Item_Id`, `Orders_idOrders`),
  CONSTRAINT `fk_Items_has_Orders_Items1`
    FOREIGN KEY (`Item_Id`)
    REFERENCES Items(`Item_Id`)
  CONSTRAINT `fk_Items_has_Orders_Orders2`
    FOREIGN KEY (`OrdersID`)
    REFERENCES Orders(`OrdersID`));
