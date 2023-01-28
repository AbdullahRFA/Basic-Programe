#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<=b && b<=c)
        printf("%d",a);
    if(b<=a && a<=c)
        printf("%d",b);
    if(c<=b && b<=a)
        printf("%d",c);
}
