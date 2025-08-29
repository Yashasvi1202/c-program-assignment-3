#include <stdio.h>
int main()
{
  int i,n,sum=0;
  printf("Enter the value of n");
  scanf("%d",&n);
  for(i=1;i<n+1;i++)
  {
      int k=(i*2)-1;
     sum=sum+k;
      }
       printf("%d is the sum",sum);
   return 0;
}
