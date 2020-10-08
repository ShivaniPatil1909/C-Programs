#include<stdio.h>
#include<math.h>
int main(){
int count=0,n,num,lastDigit;
int sum=0;

printf("enter the Armstrong number to check=");
scanf("%d",&n);
num=n;
while(n!=0){
    count++;
    n/=10;
}
printf("\nTotal number in digits=%d",count);
while(n>0){
    lastDigit=n%10;
    sum = sum + round(pow(lastDigit, count));
    n = n / 10;

}
 if(num == sum)
    {
        printf("\n%d is ARMSTRONG NUMBER", num);
    }
    else
    {
        printf("\n%d is NOT ARMSTRONG NUMBER", num);
    }


return 0;
}
