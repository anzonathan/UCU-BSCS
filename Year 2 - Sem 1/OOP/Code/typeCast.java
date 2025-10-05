public class typeCast {

    public static void main(String[] args){

        //Wide Type Casting (Implicit)
        int age = 17;
        System.out.println(age);

        long Age = age;
        System.out.println(Age);

        //Narrow Type Casting (Explicit)
        double pound = 78.8;
        System.out.println(pound);

        int Pound = (int)pound;
        System.out.println(Pound);


    }

}
