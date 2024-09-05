/*
The university wants to track the scores of students in a quiz. Write a program that:
Initializes an array of 5 integers with scores entered by the user. Calculates and prints the sum of the scores.*/

#include <stdio.h>

int main() {

    int scores[5];//array of scores
    int sum = 0; //sum of the socres


    for (int i = 0; i < 5; i++){

        printf("Enter Score of User %d: ",i+1);
        scanf("%d",&scores[i]);
        sum += scores[i]; //adds the socre to the sum

    }

    printf("This is the sum of the scores: %d",sum);


}
