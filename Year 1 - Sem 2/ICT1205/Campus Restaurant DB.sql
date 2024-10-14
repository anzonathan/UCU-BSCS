

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
  `OrdersID` INT NOT NULL,
  PRIMARY KEY (`TransactionsID`),
  CONSTRAINT `fk_Transactions_Items1` 
    FOREIGN KEY (`Item_ID`)
    REFERENCES Items(`Item_ID`),
  CONSTRAINT `fk_CustomerOrder` 
    FOREIGN KEY (`CustomerID`)
    REFERENCES Customer(`CustomerID`),
   CONSTRAINT `fk_Transactions_Orders` 
    FOREIGN KEY (`OrdersID`)
    REFERENCES Orders(`OrdersID`));
