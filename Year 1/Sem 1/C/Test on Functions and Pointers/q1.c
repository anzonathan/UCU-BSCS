/*Uganda Christian University wants to help students practice basic arithmetic
operations. Write a function `int add(int a, int b)` that takes two integers as
arguments and returns their sum. Then, write a program that:
- Reads two integers from the user.
- Calls the `add` function with these integers.
- Prints the result. */


#include <stdio.h>

int add(int a, int b){

    int result = a+b;

    return result;
}


int main () {

    int no1, no2; //input numbers

    printf("Enter the two numbers you want to add");
    printf("\nEnter number 1: ");
    scanf("%d",&no1);
    printf("Enter number 2: ");
    scanf("%d",&no2);


    printf("Sum = %d", add(no1, no2));
}
