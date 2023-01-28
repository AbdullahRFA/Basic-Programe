#include<stdio.h>
int main()
{
    int a[]= {20,4,2,5,3,-1,-6,7,6,9,10};
    int i,j,temp;
    for(i=0; i<11; i++)
    {
        for(j=0; j<11-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;

            }
  printf("%d ",a[j]);
        }


    }
    printf("\n\n");
    for(i=0; i<11; i++)
    {
        printf("%d ",a[i]);
    }


    return 0;
}
