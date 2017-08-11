#include<stdio.h>
int main()
{
    int j,i,count,a,b;

     printf("Enter min range:");
     scanf("%d",&a);

    printf("Enter max range: ");
    scanf("%d",&b);

    for(j=a;j<=b;j++) 
    {
     count = 0;
        for(i=2;i<=j/2;i++){
             if(j%i==0){
                 count++;
                 break;
             }
        }

         if(count==0&&j!= 1)
             printf("%d ",j);
    }

   return 0;
}
