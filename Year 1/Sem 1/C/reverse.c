
#include <stdio.h>
#include <string.h>


void reversestring(char* str){

        int len = strlen(str);

        for(int i = 0; i < len/2; i++){
            char temp = str[i];
            str[i] = str[len-i-1];
            str[len-i-1] = temp;
        }

}

int findMax(int arr[], int size){

    int max = [0];

    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}


int main() {

    char str[] = "Hello World";

    //reversestring(str);

    //printf("%s\n",str);


    int arr[] = {1,3,7,0,5,9,2};
    int test = sizeof(arr[0]);

    printf("Size of in: %d\n",test);

    int size = sizeof(arr)/sizeof(arr[0]);
    int max = findMax(arr, size);

    printf("Max: %d\n", max);

    return 0;

}
