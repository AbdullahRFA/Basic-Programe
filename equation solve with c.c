#include<stdio.h>

int main()

{
    int a,b,f;

    printf("enter the value of a and b:");

    scanf("%d%d",&a,&b);

    f=a*a+2*a*b+b*b;

    printf("%d",f);

    return 0;
}
