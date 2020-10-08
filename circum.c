#include<stdio.h>

	int main()

	{
		float pi,rad,circumference; 

		printf("Enter radius of circle= ");
		scanf("%f",&rad);

		pi=3.14;

		circumference=2*pi*rad;

		printf("Area of circle= %f",circumference);

		return 0;

	}
