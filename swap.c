#include<stdio.h>
int main(){
int a,b,c;
printf("enter any two number for swaping=\n");
scanf("%d%d",&a,&b);
printf("before swapping a=%d and b=%d",a,b);

c=a;
a=b;
b=c;
printf("swapped number a=%d and b=%d",a,b);

return 0;
}
