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
    printf("Enter the finding position: ");
    scanf("%d",&posi);
    for(i=posi-1;i<n;i++)
    {
            ara[i]=ara[i+1];
    }
     for(i=0;i<n-1;i++)
    {
        printf("%d ",ara[i]);
    }
    return 0;
}
