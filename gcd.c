#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        x=a;
    }
    else
    {
        x=b;
    }
    for( ; x>=1; x--)
    {
        if(a%x==0 && b%x==0)

            break;
    }
    printf("%d is the gcd",x);

    return 0;
}
