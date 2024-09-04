#include<stdio.h>
void main()
{
  int a[5], sum=0, i;
  printf("Enter 5 no: ");
  for(i=0; i<5; i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0; i<5; i++)
  {
    //sum+=a[i];
    sum=sum+a[i];
  }
  printf("Sum of 5 no: %d",sum);
}