#include<stdio.h>

int Addition(int nValue1, int nValue2)
{
	int nResult;
	nResult=nValue1+nValue2;
	
	return nResult;
}

int Subtraction(int nValue1, int nValue2)
{
	int nResult;
	nResult=nValue1-nValue2;
	
	return nResult;
}

int Multiplication(int nValue1, int nValue2)
{
	int nResult;
	nResult=nValue1*nValue2;
	
	return nResult;
}

int Division(int nValue1, int nValue2)
{
	float fResult;
	fResult=nValue1/nValue2;
	
	return fResult;
}

int GetOperatorCode()
{
	int nOperatorCode;

	printf(" Please enter operator code\n (1-Addition 2-Subtraction 3-Multiplication 4-Division) :  ");
	scanf("%d",&nOperatorCode);
	
	return nOperatorCode;
}

int GetContinueCode()
{
	int nContinueCode;

	printf("\n Do you want to continue ? (1|0) : ");
	scanf("%d",&nContinueCode);

	return nContinueCode;
}

int main()
{

	int nData1,nData2;
	float fResultData;
	int nContinueOption,nOperatorOption;

	do
	{
		printf("\n Please enter any two integers : ");
		scanf("%d%d",&nData1,&nData2);

	nOperatorOption=GetOperatorCode();

	if(nOperatorOption==1)
	{
		fResultData=Addition(nData1,nData2);
	}

	if(nOperatorOption==2)
	{
		fResultData=Subtraction(nData1,nData2);
	}

	if(nOperatorOption==3)
	{
		fResultData=Multiplication(nData1,nData2);
	}

	if(nOperatorOption==4)
	{
		fResultData=Division(nData1,nData2);
	}
	
	printf(" Result= %f \n",fResultData);

	nContinueOption=GetContinueCode();
	
	}
	while(nContinueOption>0);

	return 0;
}