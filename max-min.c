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
	int nValue1, nValue2,nValue3, nValue4;

	printf("\n Enter any 4 numbers : ");
	scanf("%d%d%d%d",&nValue1,&nValue2,&nValue3,&nValue4);

	printf("\n Maximum = %d \n ",GetMaximum(GetMaximum(nValue1, nValue2), GetMaximum(nValue3, nValue4)));
	printf("Minimum = %d \n ",GetMinimum(GetMinimum(nValue1, nValue2), GetMinimum(nValue3, nValue4)));
	return 0;
}