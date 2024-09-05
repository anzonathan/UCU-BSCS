//Author: Nathaniel Mugenyi
//Date: 30th, June, 2024

//Description: Tutorial 3 - Repetitive Statements (For Loops)

//P5-1 To Print a "box" of 5 X 5 asterisks
/*
#include <stdio.h>

int main() {

    int N = 5;

    for (int x=1;x<=5;x++){
        for (int i=1; i<=5; i++){

            printf("*");
        }
        printf("\n");

    }


}
*/
//P5-2 Read in a number N and print N asterisks on the SAME LINE.
/*
#include <stdio.h>

int main() {

    int N;

    printf("Enter the number N: ");
    scanf("%d",&N);


    for (int i=1; i<=N; i++){

        printf("*");
    }




}
*/
//P5-3 Read a number N and print the numbers from 1 to N.

/*
#include <stdio.h>

int main() {

    int N;

    printf("Enter the number N: ");
    scanf("%d",&N);


    for (int i=1; i<=N; i++){

        printf("%d\n", i);
    }




}
*/

//P5-4 Read a number N and print the numbers from 1 to N or N to 1, depending on the user's request.
/*
#include <stdio.h>
#include <string.h>


int main() {

    int N;
    char dir[2];

    printf("Enter Number N: ");
    scanf("%d",&N);
    printf("Enter F for forward or B (ENTER IN UPPERCASE): ");
    scanf("%s",dir);

    if ((strcmp(dir,"F")) == 0){
        for (int i =1; i <= N ;i++){
            printf("%d\n",i);
        }
    }

    else if ((strcmp(dir,"B")) == 0){
        for (int i = N; i > 0 ;i--){
            printf("%d\n",i);
        }
    }


}
*/
//P5-5 Read a number Nand print the N times table
/*
#include <stdio.h>

int main () {

    int N;// range

    printf("Enter Table N: ");
    scanf("%d", &N);

    int mltc;//Multiplicand
    int mltp;//Multiplier
    int prd;//product



    mltc = N;


    for (mltp = 1; mltp <= N; mltp++){

        prd = mltc*mltp;
        printf("%d x %d = %d",mltp,N,prd);
        printf("\n");



        }


}
*/

//P5-9 Read a number N and print a table from 1 to N of kilograms to the nearest pound, where 1 kilogram = 2.2026432 pounds.
/*
#include <math.h>
#include <stdio.h>

int main (){

    int N;//input
    float K = 2.2026432; //Kilogram to pund ratio

    printf("Enter value of N: ");
    scanf("%d",&N);

    printf("kg    pounds");

    for (int i = 1; i<=N; i++){

        int p = roundf(i*K);
        printf("\n%d    %d",i,p);
    }


}
*/

//P5-10 Read a number N which represents the number of pupils in a class and then reads in their marks and print the sum and the average.

/*

#include <stdio.h>

int main() {

    int N;




    printf("Enter number of pupils: ");
    scanf("%d",&N);


    int entry;// Stundent no entry
    int total = 0; //total
    float avg; //average


    for (int i = 1; i<=N; i++){
        printf("Enter mark for pupil %d : ",i);
        scanf("%d",&entry);

        total = total + entry;

        entry = 0;

    }

    avg = (float)total/N;

    printf("\nTOTAL MARK = %d",total);
    printf("\nPUPILS = %d",N);
    printf("\nAVERAGE = %.2f",avg);


}
*/
//P5-11 Read a number N and test the user on the N times table. Print the number correct as well as the percentage correct
/*
#include <stdio.h>

int main() {

    int N;

    printf("Enter table N: ");
    scanf("%d",&N);


    int entry;// Answer
    int correct = 0; //total correct
    float per; //percentage


    for (int i = 1; i<=N; i++){
        printf("%d x %d = ? ..",i,N);
        scanf("%d",&entry);

        if (entry == (i*N)){
            correct++;
        }

        else if (entry != (i*N)) {
            continue;
        }


        entry = 0;

    }

    per = ((float)correct/(float)N)*100;
    printf("You had %d correct out of %d: Percentage %.1f %%",correct,N,per);
}
*/
//P5-12 Write a program to sum all the odd and even numbers from 1 to 1000 separately. No input is required
/*
#include <stdio.h>

int main () {

    int even =0;
    int odd = 0;

    for (int i=1; i <=1000; i++){

        if ((i%2) == 0) {
            even++;
        }

        else if ((i%2) != 0) {
            odd++;

        }
    }
    printf("Sum of Odd Numbers from 1 to 1000 = %d",odd);
    printf("\nSum of Even Numbers from 1 to 1000 = %d",even);


}
*/
//P5-13
/*
#include <stdio.h>

int main() {


    int N;

    printf("Enter table N: ");
    scanf("%d",&N);

    for (int i=1; i <=N; i++){

        for (int k=1; k<=i;k++){
            printf("%d",k);
        }

        printf("\n");

    }
}
*/
