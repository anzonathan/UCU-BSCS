//A Sample Test Question

//1.Prompts the user to enter the coordinates (x, y) of three points in a 2D plane, representing the vertices of a triangle.
//2.Reads the six integer values (x1, y1, x2, y2, x3, y3) from the user and stores them.
//3.Calculates the lengths of the three sides of the triangle using the distance formula:
//  side1 = √((x2 - x1)^2 + (y2 - y1)^2)
//  side2 = √((x3 - x2)^2 + (y3 - y2)^2)
//  side3 = √((x1 - x3)^2 + (y1 - y3)^2)
//4.Determines if the three points form a valid triangle. (A triangle is valid if the sum of any two sides is greater than the third side).
//5.Displays a message indicating whether the triangle is valid or not.
//
//If the triangle is valid, performs the following:
//6. Equilateral: All three sides are equal
//7. Isosceles: Two sides are equal
//8. Scalene: All three sides are different
//9. Right-angled: One angle is exactly 90 degrees (use the Pythagorean theorem to check)
//10. Displays a message indicating the type of triangle.
//11. Calculates and displays the area of the triangle using Heron's formula.

#include <stdio.h>

int xy();//1.Prompts the user to enter the coordinates (x, y) of three points in a 2D plane, representing the vertices of a triangle.

int main(){
    xy();

}

int xy(){//function that scans and stores all xy coordinates

    int cordin[6];//Array for coordinates in the form x1,y1,x2,y2,x3,y3

    char *xyL[] = {"x,y"};//coordinate lables

    int n,l;

    for(int i = 0; i < 6; i++){

        n = i+1;

        /*
        if((n%2)==0){ //Ensures that n functions as the right lable for each xy coordinate
            n--;
            l = 1;
        }

        else{l = 0;}

        */

        printf("Enter the %s-coordinate %d: ", xyL[0],n);
        scanf("%d",&cordin[i]);

    }

    return 0;

}
