#include <stdio.h>
int main()
{
  int i,sum=0;
  for(i=1;i<101;i++)
  {
      if(i%13==0){
        sum+=i;
      }
      }
       printf("%d is the sum",sum);
   return 0;
}
