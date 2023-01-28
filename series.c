#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter the last value of the series: ");
    scanf("%d",&n);

    sum=n*(n+1)/2;

    printf("the sum is %d",sum);


    return 0;
}
