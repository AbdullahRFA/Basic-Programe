#include<stdio.h>
int main()
{
    int n,rem,cnt=0;
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        rem=n%10;
       cnt++;
        n=n/10;
    }
    printf("%d",cnt);
    return 0;
}

