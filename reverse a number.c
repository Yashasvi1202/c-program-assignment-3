#include <stdio.h>
int main()
{
  int n,rev=0;
  printf("Enter the numbeer:");
  scanf("%d",&n);
  while(n!=0)
  {
      int i=n%10;
      rev=(rev*10)+i;
      n=n/10;
  }
  printf("%d is the reversed number",rev);
   return 0;
}
