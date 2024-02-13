

#include<stdio.h>
int isPalindrome(int num)
{
  int reversed = 0, original = num;
  while (num > 0)
  {
    int remainder = num % 10;
    reversed = reversed * 10 + remainder;
    num /= 10;
  }
  return original == reversed;
}

void main()
{
  int num;
  
  printf("Enter a number: ");
  scanf("%d", &num);
  
  if(isPalindrome(num))
  {
    printf("%d is a palindrome number.\n", num);
  }
  else
  {
    printf("%d is not a palindrome number.\n", num);
  }
}