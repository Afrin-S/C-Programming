#include <stdio.h>

int main()
{
    int max,size,i;
    printf("enter the numbers");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=0;i<size;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("the maximum value is %d\n",max);
    return 0;
}
