//Author: Nathaniel Mugenyi
//Date: 24,May,2024
//Program: Temperature Converter 1.3

//Description:
//1. Choose input temperature scale (Celsius, Fahrenheit, or Kelvin)
//2. Choose output temperature scale (Celsius, Fahrenheit, or Kelvin)
//3. Convert from input temperature scale to output temperature scale
//4. Output the converted temperature

#include <stdio.h>

int main() {

    int i_scale; //Variable to store the choice for the input temperature scale
    int o_scale; //Variable to store the choice for the output temperature scale
    float i_tmp; //Variable to store the input temperature
    float f_tmp; //Variable to store the final output temperature



    //Chose temperature scale to input degrees

    printf("Choose the input temperature scale\n '1' for Celsius : '2' for Fahrenheit : '3' for Kelvin : ");
    scanf("%d", &i_scale);

    //Input Degrees

    printf("Enter degrees: ");
    scanf("%f",&i_tmp);

     //Chose temperature scale to output degrees

    printf("Choose the output temperature scale\n '1' for Celsius : '2' for Fahrenheit : '3' for Kelvin : ");
    scanf("%d", &o_scale);

    //Celsius conversions
    if (i_scale == 1){

        if (o_scale == 2){
            f_tmp = (9 * i_tmp/5)+32; //conversion formula for Celsius to Fahrenhiet
            printf("%.2f Degrees Fahrenheit ",f_tmp);
            f_tmp = 0;

        }

        else if (o_scale == 3){
            f_tmp = i_tmp+273.15; //conversion formula for Celsius to Kelvin
            printf("%.2f Degrees Kelvin ",f_tmp);
            f_tmp = 0;
        }
    }

    //Fahrenheit Conversions
    else if (i_scale == 2){

        f_tmp = ((i_tmp - 32)*5)/9; //conversion formula for Fahrenhiet to Celsius

        if (o_scale == 1){

            printf("%.2f Degrees Celsius ",f_tmp);


        }

        else if (o_scale == 3){
            f_tmp = f_tmp+273.15; //conversion formula for Fahrenhiet to Kelvin
            printf("%.2f  Degrees Kelvin ",f_tmp);
            f_tmp = 0;

        }


    }


    //Kelvin Conversions
    else if (i_scale == 3){

        f_tmp = i_tmp - 273.15; //conversion formula for Kelvin to Celsius


        if (o_scale == 1){

           printf("%.2f Degrees Celsius ",f_tmp);

        }

        else if (o_scale == 2){
            f_tmp = (9 * f_tmp/5)+32; //conversion formula for Celsius to Fahrenhiet
            printf("%.2f Degrees Fahrenheit ",f_tmp);

        }



    }

    //Error Handling


    //Error: If user chooses the same input and output temperature scale
    if (i_scale == o_scale){
        printf("Error!!!: Temperature scales are the same");
    }

    //Error: If the input temperatures are below 0 degrees Kelvin
    if (((i_scale == 1) && (i_tmp < -273.15))){
        printf("\nError!!!: This is a non-existent temperature");
    }

    else if (((i_scale == 2) && (i_tmp < -459.67))){
        printf("\nError!!!: This is a non-existent temperature");
    }

    else if (((i_scale == 3) && (i_tmp < 0))){
        printf("\nError!!!: This is a non-existent temperature");
    }




}
