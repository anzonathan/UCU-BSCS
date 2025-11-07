//Q1 Vehicle Management System

// A transport company wants a program to record information about its vehicles.

class Vehicle {
    int regNo;
    String model;
    float speed;

    public void displayInfo() {
        System.out.println(this.regNo);
        System.out.println(this.model);
        System.out.println(this.speed);
    }
}

class Truck extends Vehicle{
    int loadcapacity;

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println(this.loadcapacity);
    }


}

public class vehicleManager {

    public static void main(String[] args){

        Vehicle volvo = new Vehicle();

        volvo.regNo = 12431;
        volvo.model = "XC90";
        volvo.speed = 240;

        volvo.displayInfo();

        Truck tata = new Truck();

        tata.regNo = 13145;
        tata.model = "Signa";
        tata.speed = 180;
        tata.loadcapacity = 4;

        tata.displayInfo();
    }




}
