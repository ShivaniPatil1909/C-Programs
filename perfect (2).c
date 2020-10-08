#include<stdio.h>
{
	int i,num,sum=0;
	printf("enter any number\n");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		if(num%i==0)
		sum=sum+i;
	}
	if(sum==num)
	{	
		printf("perfect number=%d",num);
	}
	else
	{
		printf("not prime number=%d",num);
	}
	return 0;
}