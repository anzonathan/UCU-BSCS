//Author: Nathaniel Mugenyi
//Date: 02, July,2024

//Description: Converts Minutes into days, hours, and seconds


#include <stdio.h>


int main () {

    int M = 3600;
    int H,S,D = 0;

    S = M * 60;


    if (S >= 60){
        M = S/60;
        S = S%60;

        if (M >= 60){
            H = M/60;
            M = M%60;

            if (H >= 24){
                D = H/24;
                H = H%24;
            }
        }


    }

    printf("Days: %d Hours: %d Minutes: %d Seconds: %d ",D,H,M,S);





}
