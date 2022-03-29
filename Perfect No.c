#include <stdio.h>              

int main()
{
    int num,sum=0;
    scanf("%d",&num);
    for(int itr=1;itr<num;itr++)
    {
        if(num%itr==0)
        {
            sum=sum+itr;
        }
    }
    if(sum==num)
    printf("perfect number");
    else
    printf("not a perfect number");
        return 0;
    }

