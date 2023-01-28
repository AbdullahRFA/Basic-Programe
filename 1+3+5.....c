#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the last number of the series: ");
    scanf("%d",&n);

    for(i=1;i<=n;i=i+2){
        sum=sum+i;
    }

    printf("%d",sum);


    return 0;
}
