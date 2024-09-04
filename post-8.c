#include<stdio.h>
void main()
{
  int i, num;
  printf("Please enter a number : ");
  scanf("%d",&num);
  for (i=1; i<=num; i++)
  {
    printf(" %d ",i);
  }
}