//OVERLOADING


class Female{

    public static void age(String name){

        if (name.equals("girl")){
            System.out.println("Child");

        }

        else if(name.equalsIgnoreCase("woman")){
            System.out.println("Adult");
        }
    }


    public static void age(int age){

        if (age < 18){
            System.out.println("Child");
        }

        else if (age >= 18){
            System.out.println("Adult");
        }
    }
}

public class overloading {

    public static void main(String[] args){
        String xx1 = "girl";
        int xx2 = 13;

       Female.age(xx1);
       Female.age(xx2);
       Female.age("Woman");
    }
}
