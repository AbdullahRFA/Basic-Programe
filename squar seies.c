#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf("Enter the last digit of the series: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum=sum+i*i;
    }
    printf("%d",sum);



    return 0;
}
