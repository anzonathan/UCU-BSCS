//Author: Nathaniel Mugenyi
//Date: 22, July,2024

//Description: Pointers with Integers 


#include <stdio.h>
#include <stdlib.h> //to use sizeof

int main() {

    int var = 5; //integer Variable
    int *pointer;//pointer

    pointer = &var;//assigning var to pointer

    printf("Pointer Address: %p", pointer);//pointer address
    printf("\nPointer Value: %d", *pointer);//pointer value

    printf("\nVar Size in  Bytes: %lu", sizeof(var));//var size
    printf("\nPointer Size in  Bytes: %lu", sizeof(*pointer));//pointer value
}
