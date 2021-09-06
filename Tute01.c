/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int sub1,sub2;//declare subject 1 and declare subject 2
  float tot,avg;//declare total and average
  
  printf("enter subject 1 and subject 2:");
  scanf("%d %d",&sub1,&sub2 );

  tot=sub1+sub2;
  avg=tot/2.0;

  printf("Average is %2.f",avg);

  return 0;
}

