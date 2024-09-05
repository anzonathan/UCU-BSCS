#include <stdio.h>


int sum(int num){ //function that computes the sum of the the first n natural numbers using a loop

    int sum = 0; //variable to store the sum of the first n natural numbers
    for (int i=1;i <= num;i++){
        
        sum = sum+i; //adds the iterated number to the sum


    }

    
    return sum;
}

float avg(float num, float sum){ //function that computes the average of those natural numbers

    float average = sum/num; //formula for finding the average

    return average;

}


int main () {


    int n; //variable to store a positive integer

    printf("Enter a positive integer: ");
    scanf("%d",&n); //assigining input to variable

    int fsum = sum(n); //final sum
    float a_rage = avg(n,fsum);//average


    printf("The sum is = %d\n", fsum); //printing the sum
    printf("The Average is = %.2f", a_rage); //printing the average




}
