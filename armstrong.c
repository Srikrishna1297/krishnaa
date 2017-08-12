#include <stdio.h>
#include <math.h>
int main()
{
    int n, sum = 0, rem = 0, cube = 0, temp;

    printf ("enter a number");
    scanf("%d",&n);
    temp = n;
    while (n!= 0)
    {
        rem=n%10;
        cube=pow(rem,3);
        sum = sum+cube;
        n=n/10;
    }
    if (sum==temp)
        printf ("The given no is armstrong no");
    else
     printf ("The given no is not a armstrong no");
     return 0;
}

