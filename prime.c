/* prime numbers below 100 */

#include<stdio.h>
int prime()
{
	int number,i,nResult;
	for(number=2;number<=100;++number)
	{
	nResult=0;
	
	for(i=2;i<=number/2;i++)
	{
		if((number % i) == 0)
		{
			nResult++;
			break;
		}
	}
          	
	if(nResult==0)
	{
          		printf(" %d ",number);
          	}
	}

	return nResult;
}

int main()
{
	printf(" \n Prime numbers between 1 and 100 . . . \n\n");
	prime();
	printf("\n");

	return 0;
}