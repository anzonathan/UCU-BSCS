
//Author: Nathaniel Mugenyi
//Date: 22,May,2024
//Program: Fizz Buzz

//Description:
//When you imput a multiple of 3 print buzz
//When you input a multiple of 5 print Buzz
//When you input a multiple of 7 print Fizzbuzz
//If the entered numbet is not a multible of 3 or 5 print the number itself  

#include <stdio.h>

int main() {
    int number;

    printf("Give me a number thats a multiple of 3, 5, or 7: ");
    scanf("%d",&number);

    int mod1 = (number%3); //number mod 3
    int mod2 = (number%5); //number mod 5
    int mod3 = (number%7); //number mod 7

    if(mod1 == 0){
        printf("buzz");

    }

    else if(mod2 == 0){
        printf("Buzz");

    }

    else if(mod3 == 0){
        printf("FizzBuzz");

    }
    else {
        printf("%d is neither a multiple of 3 or 5 or 7.", number);

    }



}
