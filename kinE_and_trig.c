#include <stdio.h>
#include <math.h>

int kinEnergy(double mass, double velocity){ 
  // KinEn = mv2 / 2 
velocity = pow(velocity,2);
int kinEnergy = (mass  * velocity) / 2;
printf("The kinetic Energy is %d\n", kinEnergy);
return kinEnergy;
}

int trigCalc(double b, double c){
  // res = b + c / (2bc)
  int num = b + c;
  int den = 2 * b * c;
  float ans = (float) num / (float) den;
  printf("The answer is: %.2f\n", ans);
  return ans;
}

int main(void) {
  // printf("Hello World\n");
  kinEnergy(2,3);
  trigCalc(2,2);
  return 0;
}


