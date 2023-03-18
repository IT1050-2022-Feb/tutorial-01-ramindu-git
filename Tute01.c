/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
	float mark1, mark2, average = 0;
	
	printf("Enter first subject mark : ");
	scanf("%f", &mark1);
	
	printf("Enter second subject mark : ");
	scanf("%f", &mark2);
	
	average = (mark1 + mark2)/2;
	
	printf("Average of the marks : %.2f", average);
   
   return 0;
}
