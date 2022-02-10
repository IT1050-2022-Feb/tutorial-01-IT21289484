/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  float m1,m2,avg;

  printf("enter mark 1-");
  scanf("%f",&m1);

  printf("enter mark 2-");
  scanf("%f",&m2);

  avg = (m1 + m2) / 2;

  printf("Average marks is %.2f",avg);

  return 0;
}

