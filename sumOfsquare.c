#include<stdio.h>
int main(){
    int n,i;
    printf("enter a number =");
    scanf("%d",&n);
    int numArray[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&numArray[i]);
    }
    int sum=0;
     for(i=0;i<n;i++)
    {
       sum+=numArray[i] * numArray[i];
    }
    printf("sum of Array=%d",sum);


    return 0;

}
