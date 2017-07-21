#include<stdio.h>
int main()
{
signed a;
printf("enter the number: ",a);
scanf("%d",&a);
if(0<a)
{
printf("The number is positive");
}
else if(a==0)
{
printf("The number is zero");
}
else
{
printf(" The number is negative");
}
return 0;
}
