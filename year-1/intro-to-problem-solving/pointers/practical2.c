#include <stdio.h>


int larger(int* a, int* b){
    if(*a > *b){
        return *a;
    }
    else{
        return *b;
    }
}

int main(){
    
    int a = 5;
    int b = 10;
    printf("The larger number is %d", larger(&a, &b));
    return 0;
}
