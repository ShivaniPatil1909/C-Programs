#include<stdio.h>

int Addition(float fValue1, float fValue2)
{
	float fResult;
	fResult=fValue1+fValue2;
	
	return fResult;
}

int Subtraction(float fValue1, float fValue2)
{
	float fResult;
	fResult=fValue1-fValue2;
	
	return fResult;
}

int Multiplication(float fValue1, float fValue2)
{
	float fResult;
	fResult=fValue1*fValue2;
	
	return fResult;
}

int Division(float fValue1, float fValue2)
{
	float fResult;
	fResult=fValue1/fValue2;
	
	return fResult;
}

int GetOperatorCode()
{
	int nOperatorCode;

	printf("\n Please enter operator code \n (1-Addition 2-Subtraction 3-Multiplication 4-Division) :  ");
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

	float fData1,fData2;
	float fResultData;
	int nContinueOption,nOperatorOption;

	do
	{
		printf("\n Please enter any two integers : ");
		scanf("%f%f",&fData1,&fData2);

	nOperatorOption=GetOperatorCode();

	if(nOperatorOption==1)
	{
		fResultData=Addition(fData1,fData2);
	}

	if(nOperatorOption==2)
	{
		fResultData=Subtraction(fData1,fData2);
	}

	if(nOperatorOption==3)
	{
		fResultData=Multiplication(fData1,fData2);
	}

	if(nOperatorOption==4)
	{
		fResultData=Division(fData1,fData2);
	}
	
	printf("\n Result= %f \n",fResultData);

	nContinueOption=GetContinueCode();
	
	}
	while(nContinueOption>0);

	return 0;
}