#include<stdio.h>
int swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Before swaping %d %d\n",a,b);
    swap(&a,&b);
    printf("After swaping %d %d\n",a,b);
    return 0;
}
