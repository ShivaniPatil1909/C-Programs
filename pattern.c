#include<stdio.h>

void DrawDiamondPattern(int nValue)
{
	int  RowIndex,ColoumnIndex;
	
	for(RowIndex=0 ; RowIndex<nValue; RowIndex++)
	{
		for(ColoumnIndex=0; ColoumnIndex<RowIndex; ColoumnIndex++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	
	for(RowIndex=nValue ; RowIndex>0; RowIndex--)
	{
		for(ColoumnIndex=0; ColoumnIndex<RowIndex; ColoumnIndex++)
		{
			printf(" * ");
		}
		printf("\n");
	}
}

int main()
{
	int nValue; 

	printf("Enter an integer value= ");
	scanf("%d",&nValue);

	DrawDiamondPattern(nValue);

	return 0;
}