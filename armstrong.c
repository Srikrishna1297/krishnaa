#include <stdio.h>
#include <math.h>
int main()
{
    int n, s=0,r =0,c=0,t;
    scanf("%d",&n);
    t=n;
    while (n!= 0)
    {
        r=n%10;
        c=pow(rem,3);
        s=s+c;
        n=n/10;
    }
    if (s==t)
        printf ("No is armstrong no");
    else
     printf ("No is not a armstrong");
     return 0;
}

