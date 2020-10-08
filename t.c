#include<stdio.h>

int main()
{
	float celcius,fahrenheit;

	printf("Enter temp in celcius : ");
	scanf("%f",&celcius);

	fahrenheit=(celcius*9/5)+32;

	printf("Converted temperature in Fahrenheit : %f ",fahrenheit);

	return 0;
}