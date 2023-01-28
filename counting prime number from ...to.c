#include<stdio.h>
int main()
{
    int i=2,n=100,j,flag,count=0;
    while(i<=n)
    {
        flag=0;
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
          count++;
        }
         i++;

    }
printf("Total prime number is %d",count);

    return 0;
}
