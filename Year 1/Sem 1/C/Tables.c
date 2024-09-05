//Author: Nathaniel Mugenyi
//Date: 19th, June, 2024

//Description: generates a  multiplication times table based on the specifed range



#include <stdio.h>

int main () {

    int range;// range

    printf("What is the range of the multiplation: ");
    scanf("%d", &range);

    int mltc;//Multiplicand
    int mltp;//Multiplier
    int prd;//product



    mltc =1;
    for (mltc = 1; mltc <= range; mltc++){ //collumns

        for (mltp = 1; mltp <= range; mltp++){ //rows

            prd = mltc*mltp;
            printf(" %d ",prd);



        }
        printf("\n");
        }
}
