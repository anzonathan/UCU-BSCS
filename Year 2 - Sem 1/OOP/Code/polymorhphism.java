
class Person{

    //method role
    void Role(){

        System.out.println("I am a person");
    }
}

//Derived class father
//Overrides the person role

class Father extends Person{

    void Role(){
        System.out.println("I am a father");
    }
}


public class polymorphism {

    public static void main(String[] args){

        Person James = new Father();

        James.Role();
    }
}
