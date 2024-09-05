//Author: Nathaniel Mugenyi
//Date: 02, July,2024

//Description: A beeper soon to be a click


#include <stdio.h>


//beeper function

void beep(void){ 

    int beeper = 5;

    for (int i=0; i < beeper; i++){
        printf("\a");

    }


}

int main () {

    beep();
}
