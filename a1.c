#include<stdio.h>

int GetMaximum(int nValue1, int nValue2)
{
	int Maximum;

	if(nValue1>nValue2)
	{
		Maximum=nValue1;
	}
	else
	{
		Maximum=nValue2;
	}

	return Maximum;
}

int GetMinimum(int nValue1, int nValue2)
{
	int Minimum;

	if(nValue1<nValue2)
	{
		Minimum=nValue1;
	}
	else
	{
		Minimum=nValue2;
	}

	return Minimum;
}

int main()
{
	int nValue1, nValue2;

	printf("\n Enter any 2 numbers : ");
	scanf("%d%d",&nValue1,&nValue2);

	printf("\n Maximum = %d & Minimum = %d \n ",GetMaximum(nValue1, nValue2), GetMinimum(nValue1, nValue2));
	
	return 0;
}