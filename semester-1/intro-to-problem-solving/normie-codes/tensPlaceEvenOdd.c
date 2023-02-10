#include "stdio.h"

int main(){
  int inp;
  printf("Enter a number (atleast 2 digits) : ");
  scanf("%d", &inp);
  if(inp < 10){
    printf("Number has to be atleast 2 digits (greater than 9)\n");
  }else{
    int tensPlace = (inp/10)%10;
    printf("Tens place number is %d ", tensPlace);
    if(tensPlace %2 == 0){
      printf("(even number)\n");
    }else{
      printf("(odd number)\n");
    }
  }
  return 0;
}
