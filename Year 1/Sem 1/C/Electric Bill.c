//Author: Nathaniel Mugenyi
//Date: 11, 07, 2024

//Description: A meter reading program

#include <stdio.h>



int main () {

    int state = 1; //program run state

    float prevMR; //previous meter reading
    float curMR; //current meter reading

    float tarrif[3] = {1000, 2000, 5000};//tarrif Rates

    int tier; //tier slector

    while (state != 0) {


        printf("Input the tarrif tier\n1. Enter '1' for low consumption\n2. Enter '2' for medium consumption\n3. Enter '3' for high consumption ");
        scanf("%d",&tier);

        printf("Input the previous Meter Reading: ");
        scanf("%f",&prevMR);

        printf("Input the current Meter Reading: ");
        scanf("%f",&curMR);

        if ((curMR || prevMR) <=0){
            printf("INPUT ERRO!");
            break;
        }

        else {

            float unitsC = curMR - prevMR;//units conumed
            float bill = unitsC * tarrif[tier-1];

            printf("__________UMEME__________\n");
            printf("Previous Meter Reading = %.2f\n",prevMR);
            printf("Current Meter Reading = %.2f\n",curMR);
            printf("Tarrif Cost = %.2f\n",tarrif[tier-1]);
            printf("Your Electricity Bill is %.2f\n",bill);
            printf("________Thank YOU_______\n\n\n");

            printf("Enter any number to repeat and 0 to end: ");
            scanf("%d",&state);



        }
    }
}
