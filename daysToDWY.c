#include<stdio.h>
int main(){
int day,week,year;

printf("Enter a days=\n");
scanf("%d",&day);
//ignore the leap year
year=day/365;
week=(day%365)/7;
day=day-((year * 365)+(week * 7));

printf("YEAR = %d\n",year);
printf("WEEKS = %d\n",week);
printf("DAYS = %d\n",day);

return 0;
}
