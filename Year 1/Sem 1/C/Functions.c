//Author: Nathaniel Mugenyi


//P8-1 FunctionMin( a , b :integer) :integer: which returns the minimum value of a and b e.g. Min(12,6) = 6
/*
#include<stdio.h>

int Min(int a, int b); //protoype

int main() {

    printf("%d",Min(5,33));

}


int Min(int a, int b){ //Min Function

    int min = a;

    if(b < a){
        min = b;
    }

    return min;

}
*/


//P8-2 Function Parabola ( x: integer ) : Integer; Use this procedure to print a table of x versus y values f o rthe parabola given by
//y= (x^2)- x- 42 for the range x €[-6..7]
/*
#include <stdio.h>

int Parabola(int x);//prototype

int main() {

    int rMin = -6; //Maximum of range
    int rMax = 7; //Maximum of range

    printf("X______Y\n");

    for(int i=(rMin); i <= rMax; i++){

        int xC = i;//X coordinate
        int yC = Parabola(xC);//Y coordinate

        printf("%d______%d\n",xC,yC);

    }

}


int Parabola(int x){ //parabola function

    int y = ((x^2)-x)-42;

    return y;
}
*/


//P8-3 Function Fahrenheit ( c: integer) : Float ;

/*
#include <stdio.h>

float fahrenheit(int c);//prototype

int main() {

    int rMin = 10; //Maximum of range
    int rMax = 30; //Maximum of range

    printf("C______F\n");

    for(int i=(rMin); i <= rMax; i++){

        float temp = fahrenheit(i);//Temperature in Fahrenheit

        printf("%d______%.1f\n",i,temp);

    }


}


float fahrenheit(int c){ //parabola function

    float F = (1.8*c) + 32;

    return F;

}
*/

/*
P8-4 Write a C Function called Radius (Area: Integer): Real;
to calculate the radius of a circle, if you are given the Area of the circle.
The area of acircle is given by the following formula: A = m2.
Use this function to print a table of values of Area versus radius for the range of area 10 - 20, correct to ONE decimal place.
*/

/*
#include <stdio.h>
#include <math.h>

float Radius(int a);

int main() {

    printf("A  | r");

    for (int i = 10; i <= 20; i++ ){

        printf("\n%d | %.2f",i,Radius(i) );

    }


}


float Radius(int a){

    float r = sqrtf(a/M_PI);//radius

    return r;
}


*/

/*
P8-5
Write a C Function called
Sum3 (N: Integer): Integer;
which calculates the sum of the multiples
of 3 from 1 - N. For example, if N= 16, the ruinctionmustreturnrhesumorthe
sequence: 3 +6 +9 +12 +1 5=45
Use this function to print a table of values from 100 to 110 of these sums*/


/*
#include <stdio.h>

int Sum3(int n);

int main() {

    printf("N   | Sum");

    for (int i = 100; i <= 110; i++ ){

        printf("\n%d | %d",i,Sum3(i) );

    }


}

int Sum3(int n){

    int sum = 0;

    for (int i = 3; i <= n; i++){

        if ((i%3)==0){

            sum += i;
        }


    }

    return sum;
}
*/

//P8-7 Function Prime ( x : Integer ):Boolean; This function decides if the integer x is a prime number or not. Remember that a prime number has only TWO factors, itself and 1.
//Use this function to PRINT AND COUNT how many years in the 20'th century are prime numbers. [Answer = 13]
/*
#include <stdio.h>
#include <stdbool.h>

bool prime(int x);//prototype

int main() {

    int rMin = 1900; //Maximum of range
    int rMax = 1999; //Maximum of range

    int noP = 0; //No of Primes



    for(int i=(rMin); i <= rMax; i++){


        if (prime(i) == true) {
            noP++;



        }

        else {

            continue;
        }




}
    printf("Answer = %d",noP);

}

bool prime(int x){ //prime number function

    bool pState; //State of the Prime number

    for (int i = 2; i < x; i++){

        if ((x%i) == 0){

            pState = false;
            break;

        }

        else {
            pState = true;
        }
    }


    return pState;
}
*/



//P8-9 Function Sequence (N: integer ) : Int;

//Function Sequence (N: integer ) : Int; Use this function to calculate the
//sum ofthe sequence:
//12 +2 +3 +47 +57...n? For the range N= 1to 20
/*

#include <stdio.h>
#include <math.h>


int funcSeq(int n);//prototype

int main() {

    funcSeq(20);

}

int funcSeq(int n){ // function

    int E = 0; //Summation of the sequence;
    printf("N | Sum");

    for (int i = 1; i <= n; i++){


        E = E + pow(i,2); //Summation of the sequence
        printf("\n%d | %d",i,E);

    }


    return 0;
}
*/
