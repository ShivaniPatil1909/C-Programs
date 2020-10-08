#include<stdio.h>
int main(){
    float sub1,sub2,sub3,sub4,sub5;
    float total,avg,perc;

    printf("Enter the marks of subjects five times=\n");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);

    total=sub1+sub2+sub3+sub4+sub5;
    avg=total/5.0;
    perc=(total/500.00)*100;
    printf("Totl=%.2f\n",total);
    printf("avrage=%.2f\n",avg);
    printf("Percentage=%.2f\n",perc);
return 0;
}
