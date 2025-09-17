// import scanner package
import java.util.Scanner;

class regNo{
    public static void main(String[] args)
    {
        // Creating Scanner class object
        Scanner scn = new Scanner(System.in);

        // Enter regNo
        System.out.print("Enter your Registration Number: ");
        String regNo = scn.nextLine();

        System.out.println("This is your registration No.: "+regNo);

        scn.close();
    }
}
