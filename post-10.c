#include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846
int main()
{
  double radius, area;
  printf("Enter the radius of the circle: ");
  scanf("%lf", &radius);
  area = M_PI * pow(radius, 2);
  printf("The area of the circle with radius %.2f is %.2f\n", radius, area);
}