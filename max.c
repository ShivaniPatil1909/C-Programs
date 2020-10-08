# include <stdio.h>

# define TRUE 1
# define FALSE 0

int GetMaximum(int nData1, int nData2)
{
	int nMaximum;
	
	if(nData1>nData2)
	{
		nMaximum = nData1;
	}
	else
	{
		nMaximum = nData2;
	}
	
	return nMaximum;
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
	int  nData, nMaximum, nContinueCode, nFirstInput;

	/* variable initialisation */
	
	nFirstInput = TRUE;
	
	do
	{
		printf("\n Please enter an Integer : ");
		scanf("%d",&nData);

		if(nFirstInput = TRUE)
		{
			nMaximum = nData;
			nFirstInput = FALSE;
		}	
		else
		{
			nMaximum = GetMaximum(nData, nMaximum);
		}

	nContinueCode = GetContinueCode();
	
	}while(nContinueCode>FALSE);
	printf("\n Maximum = %d \n",nMaximum);	

	return 0;
}