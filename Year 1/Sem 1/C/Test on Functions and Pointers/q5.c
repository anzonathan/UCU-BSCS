/*
Uganda Christian University is managing student seating arrangements. Write a function void swap(int* a, int* b) that swaps the values of two integers using pointers. Then, write a program that:
Reads two integers representing seat numbers from the user. Calls the swap function with these seat numbers.
Prints the swapped seat numbers.

*/

#include <stdio.h>

void swap(int* a, int* b){


    int c = *a; //storage for a
    *a = **&b;
    b = &c;




    printf("These are the swapped numbers \nSeat number 1: %d\nSeat number 2: %d",*a,*b);
}

int main() {

    int seat1,seat2;//seats

    printf("Enter seat number 1: ");
    scanf("%d", &seat1);
    printf("Enter seat number 2: ");
    scanf("%d", &seat2);

    int *s1 = &seat1;
    int *s2 = &seat2;

    swap(s1, s2);


}
