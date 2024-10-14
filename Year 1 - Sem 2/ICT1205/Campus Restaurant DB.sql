-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION';

-- -----------------------------------------------------
-- Schema Campus_Restaurant_DB
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema Campus_Restaurant_DB
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `Campus_Restaurant_DB` DEFAULT CHARACTER SET utf8 ;
USE `Campus_Restaurant_DB` ;

-- -----------------------------------------------------
-- Table `Campus Restaurant DB`.`Orders`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `Campus_Restaurant_DB`.`Orders` (
  `idOrders` INT NOT NULL,
  `Order Category` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`idOrders`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Campus_Restaurant_DB`.`Transactions`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `Campus_Restaurant_DB`.`Transactions` (
  `idTransactions` INT NOT NULL,
  `Datetime` DATETIME NOT NULL,
  `Orders_idOrders` INT NOT NULL,
  PRIMARY KEY (`idTransactions`),
  INDEX `fk_Transactions_Orders1_idx` (`Orders_idOrders` ASC) VISIBLE,
  CONSTRAINT `fk_Transactions_Orders1`
    FOREIGN KEY (`Orders_idOrders`)
    REFERENCES `mydb`.`Orders` (`idOrders`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Campus Restaurant DB`.`Customer`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `Campus_Restaurant_DB`.`Customer` (
  `Customer ID` INT NOT NULL,
  `First Name` VARCHAR(45) NOT NULL,
  `Last Name` VARCHAR(45) NOT NULL,
  `Customer Category` VARCHAR(45) NOT NULL,
  `Phone Number` CHAR(10) NOT NULL,
  `idTransactions` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`Customer ID`),
  CONSTRAINT `idOrders`
    FOREIGN KEY (`Customer ID`)
    REFERENCES `mydb`.`Orders` (`idOrders`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `idTransactions`
    FOREIGN KEY (`Customer ID`)
    REFERENCES `mydb`.`Transactions` (`idTransactions`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Campus_Restaurant_DB`.`Items`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `Campus_Restaurant_DB`.`Items` (
  `Item Id` INT NOT NULL,
  `Item Name` VARCHAR(45) NOT NULL,
  `Unit cost` INT NOT NULL,
  `Qty` INT NOT NULL,
  PRIMARY KEY (`Item Id`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Campus_Restaurant_DB`.`Items_has_Orders`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `Campus_Restaurant_DB`.`Items_has_Orders` (
  `Items_Item Id` INT NOT NULL,
  `Orders_idOrders` INT NOT NULL,
  PRIMARY KEY (`Items_Item Id`, `Orders_idOrders`),
  INDEX `fk_Items_has_Orders_Orders1_idx` (`Orders_idOrders` ASC) VISIBLE,
  INDEX `fk_Items_has_Orders_Items1_idx` (`Items_Item Id` ASC) VISIBLE,
  CONSTRAINT `fk_Items_has_Orders_Items1`
    FOREIGN KEY (`Items_Item Id`)
    REFERENCES `Campus_Restaurant_DB`.`Items` (`Item Id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_Items_has_Orders_Orders1`
    FOREIGN KEY (`Orders_idOrders`)
    REFERENCES `Campus_Restaurant_DB`.`Orders` (`idOrders`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
