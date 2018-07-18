#include <stdio.h>
// Made by: Kevin Da Silva
// July 17, 2018

void reverse(int arr[], int strt_index, int end_index){ 
  
  int temp; 
  while (strt_index < end_index){
    temp = arr[strt_index];
    arr[strt_index] = arr[end_index];
    arr[end_index] = temp;
    strt_index++;
    end_index--;
   
  }

}

void print_arr(int arr[], int size_of_arr){ 
  int i;
  for (i=0; i < size_of_arr; i++){
    printf("%d \n", arr[i]);
  }
}


int main(void) {
  int usr_arr[] = {1,2,3,4,5};
  printf(" The Regular: \n");
  print_arr(usr_arr, 5);
  reverse(usr_arr, 0 , 4); 
  printf(" The Reverse: \n");
  print_arr(usr_arr, 5);

  return 0;
}
