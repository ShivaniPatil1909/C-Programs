#include<stdio.h>
int main(){

    int a,b,c;
int max;

printf("Enter a Three Number=\n");
scanf("%d%d%d",&a,&b,&c);

max=(a>b && a>c ) ? a:(b>c) ? b: c;

printf("maximum number between %d, %d, %d is %d",a,b,c,max);

  return 0;

}
