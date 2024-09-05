//Author: Nathaniel Mugenyi
//Date: 24,May,2024
//Program: Temperature Converter

//Description:
//1. Choose temperature scale
//2. Convert from Either Celsius to Fahrenheit or vice versa
//3. Output the converted temperature

#include <stdio.h>

int main() {

    int scale; //Variable to store the choice for the temperature scale
    float i_tmp; //Variable to store the input temperature
    float f_tmp; //Variable to store the final output temperature
    


    //Chose temperature scale to input degrees

    printf("Enter '1' if you are converting Celsius into Fahrenheit or enter '2' if you are converting Fahrenheit to Celsius: ");
    scanf("%d", &scale);

    //Input Degrees

    printf("Enter degrees: ");
    scanf("%f",&i_tmp);

    if (scale == 1){


        f_tmp = (9 * i_tmp/5)+32; //conversion formula for Celsius to Fahrenhiet
        printf("%.2f \n Degrees Fahrenheit ",f_tmp);
        f_tmp = 0;

    }

    else if (scale == 2){

        f_tmp = ((i_tmp - 32)*5)/9; //conversion formula for Fahrenhiet to Celsius
        printf("%.2f \n Degrees Celsius ",f_tmp);

        f_tmp = 0;

    }


    else {
        printf("wrong input");
    }



}
