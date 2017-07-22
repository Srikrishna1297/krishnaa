#include<stdio.h>
int main()
{
    int n,r,g=0,b;
    scanf("%d",&n);
    b=n;
    while(n!=0)
    {
        r=n%10;
        g=g*10+r;
        n=n/10;

    }
    if(b==g)
    {
        printf("THE NUMBER IS PALINDROME",n);
    }
    else
    {
         printf("THE NUMBER IS NOT A PALINDROME",n);
 }
 return 0;
}





