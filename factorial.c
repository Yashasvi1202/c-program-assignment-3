#include <stdio.h>
int main()
{
  int i,n,pro=1;
  printf("Enter the value of n");
  scanf("%d",&n);
  for(i=1;i<n+1;i++)
  {
     pro*=i;
      }
       printf("%d is the factorial",pro);
   return 0;
}
