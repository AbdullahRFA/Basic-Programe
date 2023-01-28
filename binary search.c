#include<stdio.h>
int main()    // binary search works with sorted data and mid_index;
{
    int ara[10000],n,i,num;
    printf("How many number do you want to input: \n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    printf("\nWhich number do you want to search: ");
    scanf("%d",&num);
    int low_index=0,high_index=n-1,mid_index;
    while(low_index<=high_index)
    {
        mid_index=(low_index+high_index)/2;
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
            low_index=mid_index+1;
        }
    }
    if(low_index>high_index)
    {
        printf("\nthe elements is not available in the ara");
    }
    else
    {
        printf("\n%d is found in the ara and the elements is %d th elements of the ara\n ",num,mid_index+1);
    }



    return 0;
}
