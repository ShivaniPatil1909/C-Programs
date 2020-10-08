# include <stdio.h>

# define TRUE 1
# define FALSE 0

int GetMinimum(int nData1, int nData2)
{
	int nMinimum;
	
	if(nData1<nData2)
	{
		nMinimum = nData1;
	}
	else
	{
		nMinimum = nData2;
	}
	
	return nMinimum;
}

int GetContinueCode()
{
	int nContinueCode;
	printf("Do you want to continue ? (0|1) : ");
	scanf("%d",&nContinueCode);

	return nContinueCode;
}

int main()
{
	int  nData, nMinimum, nContinueCode, nFirstInput;

	/* variable initialisation */
	
	nFirstInput = TRUE;
	
	do
	{
		printf("\n Please enter an Integer : ");
		scanf("%d",&nData);

		if(nFirstInput = TRUE)
		{
			nMinimum = nData;
			nFirstInput = FALSE;
		}	
		else
		{
			nMinimum = GetMinimum(nData, nMinimum);
		}

	nContinueCode = GetContinueCode();
	
	}while(nContinueCode>FALSE);
	printf("\n Minimum = %d \n",nMinimum);	

	return 0;
}