#include <stdio.h>
int main()
{
  int n,original=0,rev=0;
  printf("Enter the number:");
  scanf("%d",&n);
  original=n;
  while(n!=0)
  {
      int i=n%10;
      rev=(rev*10)+i;
      n=n/10;
  }
  printf("%d is the reversed number \n",rev);
  if(original==rev)
  {
      printf("The number is palindrome");
  }
  else
    printf("The number is not palindrome");
   return 0;
}
