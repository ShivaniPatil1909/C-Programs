#include<stdio.h>
int main() 
	{

		float a,b,c,d,e,sum,avg; 

		printf("Enter any 5 numbers: \n ");
        		scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
       		
		sum=a+b+c+d+e;

		avg=sum/5;

		printf("Sum = %f ",sum);
		printf("Average = %f ",avg);

		return 0;
	}