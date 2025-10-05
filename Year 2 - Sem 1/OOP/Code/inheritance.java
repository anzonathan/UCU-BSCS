
class Animal{

    void Sound(){
        System.out.println("Noise");
    }
}

class Dog extends Animal{

    void Sound(){
        System.out.println("Woof");
    }
}

class Sheep extends Animal{

    void Sound(){
        System.out.println("Baaah");
    }
}

class Cow extends Animal{

    void Sound() {
        System.out.println("Moo");
    }
}

public class inheritance{

    public static void main(String[] args){

        Animal Butter = new Sheep();
        Animal Bessie = new Cow();
        Animal Rex = new Dog();

        Rex.Sound();
        Bessie.Sound();
        Butter.Sound();
    }
}
