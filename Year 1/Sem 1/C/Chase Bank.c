//Author: Nathaniel Mugenyi
//Date: 29th, May, 2024

//Description:
//A Banking ATM Servies that can check balance, withdraw, and deposit


#include <stdio.h>


int main () {

    int option;//Selector

    double acc_balance = 100000; //account balance 
    int trans; //transaction amount
    

    printf("Welcome to CHASE BANK UG\nPlease Select one of the following services.\n   To Check Your Balance Enter :'1'\n   To Make A Withdrawal Enter  :'2'\n   To Make a Deposit Enter     :'3'\n");
    scanf("%d",&option);

    if (option == 1){ //balance check  
        printf("Your Current Account Balance Is\n");
        trans = 0;
        
    }

    else if (option == 2) {
        printf("Enter The Amount You Would Like To Withdraw\n");
        scanf("%d",&trans);
        printf("%.2f",trans);
        acc_balance -= trans;
  

        printf("Your New Account Balance Is\n");
        
    }

        else if (option == 3) {
        printf("Enter The Amount You Would Like To Deposit\n");
        scanf("%d",&trans);

        acc_balance += trans;
        printf("Your New Account Balance Is\n");
        
    }



    printf("%.2f UGX\n\n Thank You For Banking At CHASE BANK UG", acc_balance);


}
