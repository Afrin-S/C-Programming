#include <stdio.h>

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==0)
    {
        return 0;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int num,ans=1;
    scanf("%d",&num);
    ans=fact(num);
    printf("the factorial of %d is %d",num,ans);
    return 0;
}

    
  

