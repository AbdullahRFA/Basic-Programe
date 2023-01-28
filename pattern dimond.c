#include<stdio.h>
int main()
{
    int i,j,a;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(i=0; i<=a-1; i++)
    {
        for(j=0; j<a-1-i; j++)
        {
            printf(" ");
        }
        for(j=0; j<=i; j++)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");

    }

    for(i=a-1; i>=0; i--)
    {
        for(j=0; j<a-1-i; j++)
        {
            printf(" ");
        }
        for(j=i;j>=0; j--)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
    return 0;

}
