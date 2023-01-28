#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        rem=n%10;
        sum += (rem*rem*rem);
        n=n/10;
    }

    if(sum==temp)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }


    return 0;
}
