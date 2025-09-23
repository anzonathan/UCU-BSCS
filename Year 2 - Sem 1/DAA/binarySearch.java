
public class binarySearch{

    public static void main(String[] args){

        int arr[] = {1,6,8,10,15,67,90}; //array
        int target = 23; //target number

        int low=0, high=arr.length - 1;
        boolean found = false;

        while (low <= high){
            int mid = low + (high-low)/2;

            if (arr[mid] == target){
                System.out.println("Target found");
                found = true;
                break;}

            if (arr[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;


        }
        if(!found){
        System.out.println("Target not found");}
    }


}
