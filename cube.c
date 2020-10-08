#include<stdio.h>

int main()
{
	float side,SA, Vol;
	printf("Enter side of cube= ");
	scanf("%f",&side);

	SA=6*(side*side);
	Vol=side*side*side;

	printf(" Surface area of a cube=%f",SA);
	printf("\n Volume of cube=%f",Vol);

	return 0;
}