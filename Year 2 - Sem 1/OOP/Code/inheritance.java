//Inheritance is used to achieve runtime polymorphism

class Animal{

    void Sound(){
        System.out.println("Some sound");
    }
}

class Dog extends Animal{

    void Sound(){
        System.out.println("Bark");
    }
}

class Cat extends Animal{

    void Sound(){
        System.out.println("Meow");

    }

}

public class inheritance {

    public static void main(String[] args){

        Animal Red = new Dog();
        Red.Sound();

        Animal Candy = new Cat();
        Candy.Sound();

    }}
