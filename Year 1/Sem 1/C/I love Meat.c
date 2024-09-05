//Author: Nathaniel Mugenyi
//Date: 26.06.2024

//Description: This program uses a for loop to run through a list of kidns of meet, and breaks when you dont like the meat option.


#include <stdio.h>

int main () {

   char *meat[5] = {"Pork","Chicken","Beef","Fish","Goat"}; //one dimensional array

   printf("Enter '1' if you eat the Meat that appears and Enter '2' if you do not."); //answer guidelines


   for (int i=0; i <= 4; i++){

       int a; //answer


       printf("\nDo you eat %s? ", meat[i]);
       scanf("%d",&a);


       if (a == 1){
           printf("Yummy\n");
           continue;

       }

       else if (a == 2){
           printf("Gross\n");
           break;
       }



       }

}
