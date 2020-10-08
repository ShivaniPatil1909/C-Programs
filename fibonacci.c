#include<stdio.h>
int main(){
    int n,a=0,b=1,c=0;
printf("Enter the limit of fibonacci series=");
scanf("%d",&n);
for(int i=0;i<=n;i++){
    printf("\n%d",c);
    a=b;
    b=c;
    c=a+b;
}
return 0;
}
