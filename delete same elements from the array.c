#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("How many number do you want to input: ");
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ara[i]==ara[j])
            {
                for(k=j;k<n;k++)
                {
                    ara[k]=ara[k+1];
                }
                j--;
                n--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",ara[i]);
    }
    return 0;
}
