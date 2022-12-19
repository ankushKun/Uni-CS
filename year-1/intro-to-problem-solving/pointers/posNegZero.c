#include <stdio.h>

int main(){
    // take a number input using pointers
    int num;
    int *numPtr;
    numPtr = &num;
    printf("Enter a number: ");
    scanf("%d", numPtr);
    // check if the number is positive, negative or zero
    if(*numPtr > 0){
        printf("The number is positive.");
    }
    else if(*numPtr < 0){
        printf("The number is negative.");
    }
    else{
        printf("The number is zero.");
    }
    return 0;
}
