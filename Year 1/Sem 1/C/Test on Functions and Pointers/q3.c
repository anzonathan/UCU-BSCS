/*The university needs to find the highest score among a group of students. Write
a function int findMax(int arr[], int size) that returns the maximum value in an array. Then, write a program that:
Initializes an array of 5 integers with scores entered by the user. Calls the findMax function and prints the highest score. */


#include <stdio.h>

int findMax(int arr[], int size) {

    int Max = arr[0];//Stores the max value in array

    for (int i= 1; i < size;i++){

        if(arr[i] > Max){
            Max = arr[i];
        }

        else{continue;}

    }

    return Max;
}

int main() {

    int scores[5] = {79,89,34,59,80}; //array of student scores

    int max = findMax(scores, 5);

    printf("This is the highest socre = %d", max);



}
