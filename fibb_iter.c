#include <stdio.h>
// Intro to C Programming 
// 06/24/18
// Kevin Da Silva
int fibbonaci(int n){
  int total = 1;
  int b = 0;
  int temp;

  while (n >= 0 ){
    temp = total;
    total = total + b;
    b = temp;
    printf("Fibb sequence: %d, %d, %d \n", temp, total, b);
    n--;
  }
printf("The total at the end of iteration: %d\n", b);
return b;
}



int main(void) {
  fibbonaci(14);
  return 0;
}
