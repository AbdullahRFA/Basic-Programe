#include<stdio.h>
int main()
{
    int x=10,y=20;
    int p,q;
    p=prod(x,y);
    q=prod(p,prod(x,y));
    printf("%d %d\n",p,q);


}
int prod(int a,int b)
{
    return (a*b);
}
