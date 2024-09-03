#include<stdio.h>
int main()
{
  int num, reversed = 0, original, remainder;
  printf("Enter an integer: ");
  scanf("%d", &num);
  original = num;
  
  while (num != 0)
  {
    remainder = num % 10; //Get the last digit
    reversed = reversed * 10 + remainder; //Append it to reversed
    num /= 10; //Remove the last digit
  }

  if(original == reversed)
  {
    printf("%d is a palindrome.\n", original);
  }
  else
  {
    printf("%d is not a palindrome.\n", original);
  }
}