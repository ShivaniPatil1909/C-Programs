#include<stdio.h>
	
	int main()
	{
		float basics,net_salary,DA,IT,PF;

		printf("Enter the basic salary of an Employee=  Rs.");
		scanf("%f",&basics);
		
		DA=1.5*basics;
		IT=0.3*basics;
		PF=0.0833*basics;
		net_salary=basics+DA-(IT+PF);

		printf("\n Basic salary of an employee=Rs%f. \n DA of an employee=Rs%f \n Income tax on salary= Rs.%f \n 
			Provident Fund on salary=Rs.%f \n Net salary=Rs.%f \n",basics,DA,IT,PF,net_salary);

	}