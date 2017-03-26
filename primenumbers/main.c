#include <stdio.h>

int main()
{
    int i,j,n,x;
    printf("enter the number :");
    scanf("%d",&n);
    printf("the prime numbers are :");
    for(i=2;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                x=0;
                break;
            }x=1;
        }
         
        if(x)
        {
           
            printf("%d,\n",i);
        }
    }
    return 0;
}

