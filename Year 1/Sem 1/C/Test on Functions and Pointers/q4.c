/* Write a program that:
Declares an integer variable and a pointer to that integer.
Assigns a value to the integer using both the variable and the pointer. Prints the value of the integer and the address stored in the pointer.*/


#include <stdio.h>

int main(){

    int var;
    int *pvar = &var;

    *pvar = 5;


    printf("The value of the integer: %d", *pvar);
    printf("\nThe adress store in the pointer: %p", pvar);
}
