#include <stdio.h>
void main() {
  int num = 10;
  if (num > 0)
  {
    printf("%d is a positive number.\n", num);
  }
  else if (num < 0) {
    printf("%d is a negative number.\n", num);
  }
  else {
    printf("%d is zero.\n", num);
  }
}