
import java.util.LinkedList;
import java.util.ListIterator;

public class linkedList {

    //Main Driver Method
    public static void main(String[] args){

        //Creating a linked List

        LinkedList<String> friends = new LinkedList<String>();

        // Adding Elements to the LinkedLIst using add() method

        friends.add("Charis");
        friends.add("Andrea");
        friends.add("Owen");
        friends.add("Faith");
        friends.add("Cole");


        //remove Element
        friends.remove("Faith");
        friends.remove(0);


        System.out.println(friends);


        //Iterator
        ListIterator<String> iterator = friends.listIterator();

        while (iterator.hasNext()){
            System.out.println(iterator.next());
        }

        //Using a for loop
        for (String i: friends){
            System.out.println(i);

        }


    }
}
