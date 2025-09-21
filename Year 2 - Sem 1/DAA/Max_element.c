/*
- Write an Algorithm to find the maximum element in an Array
- Implement the algorithm with a C/C++ code
- Upload your solution on Github and share your link via Discord DM
*/

#include <stdio.h>

int main() {

    //array of numbers 
    int arr[] = {5,6,10,2,1};
    //array size
    size_t size = sizeof(arr)/ sizeof(arr[0]);
    //maximum number
    int max = arr[0];
    //iterator
    int i;

    for(i = 1; i<size; i++){

        if(arr[i] > max){
            max = arr[i];
        }
        //printf("previous No.=%d current No.=%d max=%d\n", arr[i-1],arr[i],max);
        
    }

    printf("This is the maximum element in the arr %d", max);
    return 0;
}
