//Author: Nathaniel Mugenyi
//Date: 17th, July, 2024


#include <stdio.h>


void calculate(int a, int b, char operator){
    switch (operator) {
        case '+':
            printf("Sum: %d\n", a+b);
            break;
        case '-':
            printf("Sum: %d\n", a-b);
            break;
        case '*':
            printf("Sum: %d\n", a*b);
            break;
        case '/':
            if(b == 0){
                printf("Cannot divide by zero\n");
            }
            else {
                printf("Quotient: %d\n", a/b);
            }
        default:
            printf("Invalid operator\n");
    }
}

int main() {

    char op = '+';

    calculate(4, 6, op);
}
