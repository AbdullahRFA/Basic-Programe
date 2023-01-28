#include<stdio.h>
int main()
{
    int i,j,n,temp,cnt=0;
    printf("How many number do you want to short: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
   {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
   {
        printf("%d ",a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                cnt++;
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n\n");
    printf("%d",cnt);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }


    return 0;
}
