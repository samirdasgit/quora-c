#include<stdio.h>
void main() {
  int a, b;

  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);
  
  a = a + b;
  b = a - b;
  a = a - b;

  printf("After swapping, 1st no = %d and 2nd no = %d\n", a, b);
}