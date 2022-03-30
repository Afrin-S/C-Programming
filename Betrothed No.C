
#include <stdio.h>

int main()
{
   int num1,num2,i,sum1=0,sum2=0;
   printf("enter the two numbers:");
   scanf("%d  %d",&num1,&num2);
   for(i=1;i<num1;i++)
   {
       if(num1%i==0)
       {
           sum1=sum1+i;
       }
   }
   for(i=1;i<num2;i++)
   {
       if(num2%i==0)
       {
       sum2=sum2+i;
       }
   }
   if((num1+1==sum2)&&(num2+1==sum1))
   {
       printf("%d and %d are betrothed number:",sum1,sum2);
   }
   else
   {
       printf("%d and %d are not a betrothed number:",sum1,sum2);
   }
   
   
    return 0;
}
