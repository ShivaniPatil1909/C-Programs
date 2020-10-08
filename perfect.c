#include<stdio.h>

int perfect(int);

int main()
{
	int num,s;
	printf(" Please enter an integer number: ");
	scanf("%d",&num);
	s = perfect(num);

	if(s == num)
	{
		printf("\n '%d' is a perfect number\n",num);
	}
	else
	{
		printf("\n '%d' is not a perfect number\n",num);
	}

		return 0;
}

int perfect(int numbr)
{
	int a=1, sum=0;
	while(a< numbr)
	{
		if(numbr % a == 0)
		sum=sum+a;
		a++;
	}

	return sum;
}          