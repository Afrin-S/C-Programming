#include <stdio.h>

int main()
{
    int num1 ,num2,itr,sum=0;
    printf("Enter two numbers num1 and num2");
    scanf("%d %d",&num1,&num2);
    for(itr=num1;itr<=num2;itr++)
    {
        if(itr%2==0)
        {
        sum=itr+sum;
        printf("%d\n",sum);
        
        }
    }

    return 0;
}
