#include<stdio.h>
int main()
{
    int n,i,j,num,posi;
    printf("How many digit do you want to input: ");
    scanf("%d",&n);
    int ara[n];
    printf("Enter the elements one by one: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    printf("Enter the finding digit: ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(ara[i]==num)
        {
            posi=i;
        }

    }
    for(i=posi;i<n;i++)
    {
        ara[i]=ara[i+1];
    }
     for(i=0;i<n-1;i++)
    {
        printf("%d ",ara[i]);
    }
    return 0;
}
