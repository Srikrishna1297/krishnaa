#include<stdio.h>
int main()
{
 int a, b, c,l;
 printf(" Enter three values \n");
 scanf("%d %d %d", &a, &b, &c);
 l=((a>b && a>c)?a: (b>c)?b:c);
 printf("Largest num is: %d",l);
 return 0;
}
