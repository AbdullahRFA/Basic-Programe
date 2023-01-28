#include<stdio.h>
int main()
{
    int n,a[1000];
    printf("How many number do you want to input: ");
    scanf("%d",&n);
    int i,num;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("which number do you want to search");
    scanf("%d",&num);
    int low_index=0,higher_index=n-1,mid_index;
    while(low_index<=higher_index)
    {
        mid_index=(low_index+higher_index)/2;
        if(num==a[mid_index])
        {
            break;
        }
        else if(num<mid_index)
        {
            higher_index=mid_index-1;
        }
        else
        {
            low_index=mid_index+1;
        }
    }
    if(low_index>higher_index)
    {
        printf("the number is out of the list\n");
    }
    else
    {
        printf("%d is mach with %dth number element\n",num,mid_index+1);
    }

    return 0;
}
