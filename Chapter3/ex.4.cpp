#include<stdio.h>
int main()
{
	float a;
	printf("Enter a floating-point value: ");
	scanf("%f",&a);
	printf("fixed-point notation: %.6f\n",a);
	printf("exponential notation: %e\n",a);
	printf("p notation: %.2a",a);
	return 0;
} 