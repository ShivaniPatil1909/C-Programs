#include<stdio.h>
int main(){
int a,b,c;
int max;

printf("Enter a Three Number=\n");
scanf("%d%d%d",&a,&b,&c);

if(a>b){
    if(a>c){
        max=a;
    }else{
        max=c;
    }
}else{
    if(b>c){
        max=b;
    }else{
    max=c;
    }
}
printf("maximum number between %d, %d, %d is %d",a,b,c,max);

return 0;
}
