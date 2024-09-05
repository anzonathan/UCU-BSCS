//Author: Nathaniel Mugenyi
//Date: 30th, June, 2024

//Description: Tutorial 2 - Decision Making Statements


//P4-1. Read in a number x and print if the number is even or odd.
/*
#include <stdio.h>
#include <string.h> //Library to use strcpy funtion to reassign strings

int main() {

    int x;
    char state[5];

    printf("Enter number A: ");
    scanf("%d",&x);

    if ((x%2) == 0) {
        strcpy(state,"even");
    }

    else if ((x%2) != 0) {
        strcpy(state,"odd");;
    }



    printf("%d is an %s number",x,state);

}
*/

//P4-2. Read in two numbers A and B and print which one is the biggest and by how much
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int A,B; //A and B are inputs

    printf("Enter number A: ");
    scanf("%d",&A);
    printf("Enter number B: ");
    scanf("%d",&B);

    int C = A-B;//C is the diffence between these inputs

    if (C > 0) {
        printf("A is bigger than B by %d",C);
    }

    else if (C < 0){
        C = abs(C);
        printf("B is bigger than A by %d",C);

    }



}
*/

//P4-3. Read in two numbers A and B and print if A is a FACTOR of B
/*
#include <stdio.h>

int main() {

    int A,B; //A and B are inputs

    printf("Enter number A: ");
    scanf("%d",&A);
    printf("Enter number B: ");
    scanf("%d",&B);



    if ((A <= B) && ((B%A) == 0)) {
        printf("%d is a factor of %d",A,B);
    }

    else if ((B%A) != 0) {
        printf("%d is not a factor of %d",A,B);

    }



}
 */

//P4-4 Read in a number x and print whether it is a perfect square or not, as well as the square root of the number
/*
#include <stdio.h>
#include <math.h>

int main() {

    int x;

    printf("Enter the value of x: ");
    scanf("%d",&x);
    float root = sqrtf(x);

    if (root == (int)root){
        printf("%.d is a perfect square",x);

    }

    else if (root != (int)root){
        printf("%.d is not a perfect square",x);

        }

    printf("\n%.2f is the sqaure root.", root);

}
*/

//P4-5 Read in three numbers A,B, and C and print if they are all different (unique) or not

/*
#include <stdio.h>

int main() {

    int A,B,C; //inputs

    printf("Enter number A: ");
    scanf("%d",&A);
    printf("Enter number B: ");
    scanf("%d",&B);
    printf("Enter number C: ");
    scanf("%d",&C);

    if ((A || B || C) != (A || B || C)){

        printf("Numbers are not unique.");

    }

    else if ((A || B || C) == (A || B || C)){

        
        printf("Numbers are unique.");
        
    }
}
*/
