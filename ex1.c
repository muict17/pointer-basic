#include <stdio.h>


void sum(int a, int b, int *summation){
  *summation = a + b;
}
int main(){
  int a = 4;
  int b = 5;
  int summation;
  sum(a,b,&summation);

  printf("Summation: %d\n", summation);
  printf("Address Summation: %x\n", &summation);
  return 0;
}
