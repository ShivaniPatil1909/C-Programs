#include<stdio.h>
int main()
{
	int A,B;

	printf(" Enter value of A : ");
	scanf("%d",&A);

	printf(" Enter value of B : ");
	scanf("%d",&B);

	printf("\n After swapping \n A : %d\n B : %d\n",A,B);

	A=A+B;
	B=A-B;
	A=A-B;

	printf("\n After swapping \n A : %d\n B : %d",A,B);

	return 0;

}