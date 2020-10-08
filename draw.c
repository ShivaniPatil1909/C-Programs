#include <stdio.h>

void DrawRectangle(char cSymbol, int nWidth , int nHeight)
{
	int i , j ;
	for(i = 0; i < nHeight; i++)
	{
		for(j = 0; j < nWidth; j++)
		{
			printf("%c ", cSymbol);
		}
		printf("\n");
	}

}

int main()
{
	int  nWidth ,  nHeight;
	char cSymbol;

	printf("Enter the Character Width and Height: ");
	scanf("%c%d%d",&cSymbol,&nWidth,&nHeight);
	
	DrawRectangle(cSymbol , nWidth , nHeight);

	return 0;
}