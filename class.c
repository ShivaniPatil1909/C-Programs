#include<stdio.h>
int main()
{
	int marks;

	printf("\n Please enter your marks in percentage: ");
	scanf("%d",&marks);

	if(marks>70 && marks<=100)
	{
		printf("\n Congrats..!!! You got 'Distinction'.\n ");
	}
	else if(marks>60 && marks<=70)
	{
		printf("\n Congrats..!!! You got 'First Class'.\n ");
	}
	else if(marks>50 && marks<=60)
	{
		printf("\n Congrats..!!! You got 'Second Class'.\n ");
	}
	else if(marks>=40 && marks<=50)
	{
		printf("\n Congrats..!!! You got 'Pass Class'.\n ");
	}
	else
	{
		printf("\n Sorry.. You are 'Fail'.\n ");
	}


	return 0;
}