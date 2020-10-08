#include<stdio.h>
int main(){
    int day,week,year;
    /*printf("Enter the days");
    scanf("%d",&day);

    year=day/365;
    week=(day %365)/7;
    day=day-((year * 365) + (week * 7));

    printf("YEar=%d\n",year);
    printf("week=%d\n",week);
    printf("day=%d\n",day);
    */
    printf("Enter year =\n");
    scanf("%d",&year);

   if((year%4==0 && year/100!=0) || (year % 400==0))
    {
        printf("\nThis is %d leap year",year);
    }else{

    printf("\nthis is not %d leap year",year);
    }
    return 0;
}
