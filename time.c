#include<stdio.h>
int main()
{
	int n,hr,min,sec;

	printf("Enter seconds:");
	scanf("%d",&n);

	if(n>3600)
	{
		min = n/60;
		sec = n%60;
		hr = min/60;
		min = min%60;

		printf("Converted format %d hour %d mins %d secs",hr,min,sec);
	}

	else
	{
		min = n/60;
		sec = n%60;

		printf("Converted format %d mins %d secs",min,sec);
	}
}