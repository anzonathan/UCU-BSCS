//Author: Nathaniel Mugenyi
//Date: 12, June, 2024

//Description: This program uses a switch function to determine your social generation.

#include <stdio.h>

int main () {

    int yob;//Year of Birth

    printf("What year were you born in :");
    scanf("%d",&yob);


    switch(yob){
        case 1928 ... 1945:
            printf("Silent Generation");
            break;
        case 1946 ... 1964:
            printf("Baby Boomers");
            break;
        case 1965 ... 1980:
            printf("Generation X");
            break;
        case 1981 ... 1996:
            printf("Millennials");
            break;
        case 1997 ... 2012:
            printf("Generation Z");
            break;
        case 2013 ... 2024:
            printf("Alpha Generation");
            break;
        default:
            printf("That is not a valid answer");
            break;



    }
}
