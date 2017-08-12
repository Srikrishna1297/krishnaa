
#include <stdio.h>
int main()
{
  int n1, n2, i,t,n,r;
  printf("Enter two numbers(intervals): ");
  scanf("%d %d", &n1, &n2);
  for(i=n1+1; i<n2; ++i)
  {
      t=i;
      n=0;
      while(t!=0)
      {
          r=(t%10);
          n+=r*r*r;
          t/=10;
      }
      if(i==n)
      {
          printf("%d ",i);
      }
  }
  return 0;
}
