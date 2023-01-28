#include<stdio.h>
int sorting_ascending_order(int ara[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(ara[j]>ara[j+1])
            {
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;
            }
        }
    }
    return ara;
}
int main()
{

    int n;
    printf("How many number do you to enter: ");
    scanf("%d",&n);
    int ara[n];
    printf("Enter the elements one by one: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    sorting_ascending_order(ara,n);
     for(int i=0;i<n;i++)
    {
        printf("%d ",ara[i]);
    }

    return 0;
}

