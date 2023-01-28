#include<stdio.h>
int main()
{
    int a;
    printf("How many number do you want to input: ");
    scanf("%d",&a);
    printf("Enter the elements: ");
    int ara[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&ara[i]);
    }
    int mid_index,lowest_index=0,high_index=a-1,num;
    printf("Enter the element which you want to search: ");
    scanf("%d",&num);
    while(lowest_index<=high_index)
    {
        mid_index=(lowest_index+high_index)/2;
        if(num==ara[mid_index])
        {
            break;
        }
        if(num<ara[mid_index])
        {
            high_index=mid_index-1;
        }
        else
        {
            lowest_index=mid_index+1;
        }
    }
    if(lowest_index>high_index)
    {
        printf("%d is not in the array\n",num);
    }
    else
    {
        printf("%d is Found at %d position",num,mid_index+1);
    }
    return 0;
}
