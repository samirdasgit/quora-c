#include <stdio.h>
int main()
{
  int number, i;
  int isPrime = 1;
  printf("Enter an integer: ");
  scanf("%d",&number);

  if (number <= 1)
  {
    isPrime = 0; //Numbers less than or equal to 1 are not prime
  }
  else
  {
    for(i = 2; i <= number / 2; i++)
    {
      if(number % i == 0)
      {
        isPrime = 0; //Number is divisible by i, hence not prime
        break;
      }
    }
  }
  
  if (isPrime)
  {
    printf("%d is a prime number.\n", number);
  }
  else
  {
    printf("%d is not a prime number.\n", number);
  }
}