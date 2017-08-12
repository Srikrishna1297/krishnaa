#include<stdio.h>
int main()
{
    int n,i;
    long long int f=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
            {
            f*=i;
            }
                printf("num is %lld",f);
    return 0;

}
