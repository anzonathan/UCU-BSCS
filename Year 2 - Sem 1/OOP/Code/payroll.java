//Import Java Scanner package
import java.lang.management.ThreadInfo;
import java.util.Scanner;


public class Payroll {

    public static void main(String[] args){

        //Creating Scanner Object
        Scanner scn = new Scanner(System.in);

        //Program: Input Parameters
        System.out.println("/////////Welcome TO ABC Company: Payroll System///////////");
        System.out.println("Enter the form to Compute pay and taxes of an employee");

        //Form
        System.out.println("Enter the employee's Name: ");
        String Name = scn.nextLine();
        System.out.println("Enter the employee's TIN No.: ");
        int Tin = scn.nextInt();
        System.out.println("Enter the employee's Gross Income: ");
        float Gross = scn.nextFloat();

        double URATax = Gross * 0.3;
        double NSSF1 = Gross * 0.05;
        double NSSF2 = Gross * 0.10;


        double netPay = Gross - URATax - NSSF1 - NSSF2;

        //Payslip
        System.out.println("//// Payslip ////");
        System.out.println("Employee Name: " +Name);
        System.out.println("Employee TIN No.: "+Tin);
        System.out.println("Gross Pay =  " + Gross);
        System.out.println("NSSF Employee Contribution (5%) =  " + NSSF1);
        System.out.println("NSSF Employer Contribution (15%) =  " + NSSF2);
        System.out.println("URA Tax Remittance (30%) =  " + URATax);
        System.out.println("___________________________");
        System.out.println("Net Pay =  " + netPay);










    }

}
