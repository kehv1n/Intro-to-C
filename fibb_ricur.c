#include <stdio.h>

int fibb(int n){ 
  if (n <= 1){ 
    return n;
  }
  else { 
    return (fibb(n-1) + fibb(n-2)); 
  }
}

int main(void) {
  int usr_inp, i;
  printf("Please enter the amount of Fibbonaci sequences you woud like to do...\n");
  printf("Keep in mind it only really gets cool with a number greather than 7\n");
  scanf("%d", &usr_inp);
  for(i=usr_inp; i >= 1; i--){ 
    // printf("%d\n", i);
    printf("at the %d fibbonaci level, the total is: %d\n", i, fibb(i));
  }
  return 0;
}

