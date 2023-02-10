#include <stdio.h>


int main(){
    // take input of array
    int arr[5];
    int *arrPtr;
    arrPtr = arr;
    printf("Enter 5 numbers: ");
    for(int i=0; i<5; i++){
        scanf("%d", arrPtr+i);
    }
    // reverse the array using pointers
    int temp;
    for(int i=0; i<5/2; i++){
        temp = *(arrPtr+i);
        *(arrPtr+i) = *(arrPtr+4-i);
        *(arrPtr+4-i) = temp;
    }
    // print the reversed array
    printf("Reversed array is: ");
    for(int i=0; i<5; i++){
        printf("%d ", *(arrPtr+i));
    }
    return 0; 
}
