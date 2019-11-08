#include <stdio.h>

int main(){
  int temp;
  int a = 4;
  int b = 5;
  int *pointer;
  printf("Pass by Value\n");
  printf("A: %d, B: %d\n", a,b);
  printf("Addresss A: %x, Address B: %x", &a, &b);
  printf("\n");
  temp = a;
  a = b;
  b = temp;
  printf("A: %d, B: %d", a,b);
  printf("\n");
  printf("Addresss A: %x, Address B: %x", &a, &b);
  printf("\n");

  printf("Pass by reference\n");
  pointer = &a;

  printf("A: %d, Pointer: %d\n", a, *pointer);
  printf("Address A: %x, Address Pointer: %x\n", &a, pointer);

  a = 8;
  printf("Pointer: %d", *pointer);
  printf("\n");
}
