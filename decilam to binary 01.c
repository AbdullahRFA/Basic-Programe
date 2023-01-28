#include<stdio.h>
int b[100];
int decimai_binary(int a)
{
    int i=0,j,rem;
    while(a!=0)
    {
        rem=a%3;
        b[i]=rem;
        i++;
        a=a/3;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",b[j]);
    }
}
int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    int result=decimai_binary(n);
   // printf("Binary:%d",result);

    return 0;
}
