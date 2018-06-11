#include <stdio.h>

int temp_reverse(int temp, char mode){ 
  // If user asks for farenheit
  if (mode == 'f'){
    temp = temp * 9/5;
    temp = temp + 32;
    printf("The dregrees Farenheit for that temp is: %d \n", temp);
    return temp;
  }
  // If user asks for celcius
  if (mode == 'c'){
    temp = temp - 32;
    temp = temp * 5/9;
    printf("The degree celcius for that temp is: %d \n",temp);
    return temp;
  }
  else { 
    printf("Please enter the correct mode to use this function");
    return 0;
  }
}

int main(){ 
  // User input variables
  int fa, cel;

  // Print to screen user request
  printf("Enter a degree in Farenheit\r\n");
  // User inputs Fahrenheit
  scanf("%d", &fa);
  // Returns the temperature in Celcius
  temp_reverse(fa,'c');

  // Print to screen user request
  printf("Enter a degree in Celcius\r\n");
  // User inputs Celcius
  scanf("%d", &cel);
  // Returns the temperature in farenheit
  temp_reverse(cel,'f');
  return 0;
}




