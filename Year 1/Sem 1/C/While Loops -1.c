//Author: Nathaniel Mugenyi
//Date: 30th, June, 2024

//Description: Tutorial 4 - While Loops


//P7-1. Read and prints if a series of numbers are ODD or EVEN until the user enters a zero.
/*
#include <stdio.h>
#include <string.h>

int main () {

    int ans; //answer


    while (ans != 0){
        printf("\nEnter a number: ");
        scanf("%d",&ans);

        if (ans == 0){
            break;
        }

        else if ((ans%2) == 0) {
                printf("%d is even",ans);
            }

        else if ((ans%2) != 0) {
            printf("%d is odd",ans);
        }




    }

}
*/

//P7-2. A repeat loop is useful when you do not know how many items need to be processed: Design and then Write a C procedure/program to do the following:
//Read a series of marks terminated by a negative number ( not to be Included) and print the highest number input, the number of marks and the average and the sum.

/*
#include <stdio.h>

int main() {

    int entry;// entry
    int total = 0; //total
    float avg; //average
    int i = 0; //add
    int max = 0; //maximum value

    while (entry >= 0){

        i++;

        printf("Enter mark for pupil %d : ",i);
        scanf("%d",&entry);

        if (entry < 0){
            break;
        }
        else if (entry > max){
            max = entry;
        }

        total = total + entry;




    }


    int p = i-1; //pupils
    avg = total/p;


    printf("\nTOTAL MARK = %d",total);
    printf("\nPUPILS = %d",p);
    printf("\nAVERAGE = %.2f",avg);
    printf("\nMAX MARK = %d",max);
}
*/

//P7-3 Write a program to calculate and display the first 10 natural numbers (1,2,3 etc.) that are both ODD and divisible by 7
/*
#include <stdio.h>

int main () {

    int i=1; //counter
    int N =1; //natural number

    while(i <= 10){


        if((N%2 != 0) && (N%7 == 0)){
            i++;
            printf("%d\n",N);
        }


        N++;
    }

}
*/

//P7-4 To convert from degrees Fahrenheit (F) to degrees Celsius (C), we use the following formula:
/*
#include <stdio.h>

int main(){

    int C = 20;
    float F;

    printf("C     F\n");

    while (F<=85){

        F = (1.8*C) +32;


        if (F > 85){
            break;
        }
        printf("%d     %.1f\n",C,F);
        C++;




    }
}
*/
//P7-5 Generate a random number between 1and 100 and ask the user to guess the number until they get the secret number.
//Tell the user if his guess is too high or too low or correct. Also tell the user how many guesses he or she has had .

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));
    int G = rand() % (100+1); //Correct Guess
    int E; //Entry for Guess
    int T = 1; //Total Guesses





    while (E != G){

        printf("Enter your guess: ");
        scanf("%d",&E);

        if (E == G){
            break;
        }

        else if (E < G) {

            printf("Too Low, ");
            T++;

        }

        else if (E > G) {

            printf("Too High, ");
            T++;

        }


    }

    printf("Correct! You took %d guesses in total",T);

}
*/
