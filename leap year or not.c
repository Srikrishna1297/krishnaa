#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
if(n%4==0&&n%400==0)
printf("Given year is leap year",n);
else if(n%100==0)
printf("Given year is not a leap year");
else
printf("Given year is nit a leap year");
return 0;
}
