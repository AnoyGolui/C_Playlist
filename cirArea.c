//Program to accept value of radius and print area of a circle.

#include<stdio.h>

int main()
{
  float area,radius;

  printf("Enter Radius:");
  scanf("%f",&radius);

  area=3.14*radius*radius;

  printf("Area : %6.2f",area);

 return 0;
}
