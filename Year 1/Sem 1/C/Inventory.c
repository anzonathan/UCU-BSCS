//Author: Nathaniel Mugenyi
//Date: 26.06.2024
//Title: Inventory Management System

//Description: Allows you to manage a small inventory, add items, display items, update items, and calulate inventory value

#include <stdio.h>
#include <stdlib.h>

int main () {


//Items

char *shelf[5] ={"Bananas","Tomatoes","Carrots","Onions","Garlic"};

int qty[5] = {0,0,0,0,0};//list for quantities per item
int uprice[5] = {300,200,400,100,1000};//list for prices per item


//Instrucitions


int select,item, entry; //selectors

while (select != 5){

    printf("\n____Wandegeya Grocery Stall____\n");
    printf("Select by entering a number on a listed item.\n");
    printf("1. Add Item\n");
    printf("2. Display Inventory\n");
    printf("3. Update Item\n");
    printf("4. Calculate total Value\n");
    printf("5. Exit\n");
    scanf("%d",&select);


    //Add Item

    if (select == 1){

        printf("Select an item\n");

        for (int i = 0; i <= 4; i++){
            int ln = i+1;//list Number
            printf("%d. %s Qty: %d\n",ln,shelf[i],qty[i]);
        }


        scanf("\n%d",&item);

        qty[item-1] ++;

        printf("\nItem Added Successfully\n");
        printf("Item:%s New Qty:%d",shelf[item-1],qty[item-1]);





    }

    //Display Inventory

    else if (select == 2) {

        for (int i = 0; i <= 4; i++){
            int ln = i+1;//list Number
            printf("%d. %s Qty: %d Unit Price: %d\n",ln,shelf[i],qty[i],uprice[i]);
        }

    }


    //Update Item

    if (select == 3){

        printf("Select an item\n");

        for (int i = 0; i <= 4; i++){
            int ln = i+1;//list Number
            printf("%d. %s Qty: %d\n",ln,shelf[i],qty[i]);
        }


        scanf("\n%d",&item);
        printf("What is the new Qty? ");
        scanf("%d",&entry);

        qty[item-1] = entry;

        printf("\nItem Qty Changed Successfully\n");
        printf("Item:%s New Qty:%d",shelf[item-1],qty[item-1]);





    }

    //Calculate Total Value

    if (select == 4){

        int itemc;//item cost

        int total;//total inventory value

        for(int uc = 0; uc <= 4; uc++){

                itemc = itemc + (qty[uc] * uprice[uc]);

            }


        printf("The total Cost of all inventory Items is: %d UGX", itemc);
        itemc = 0; //reset

    }

    //Exit

    else if (select == 5){
        exit(0);
    }
}
}
