#include<stdio.h>
int main()
{
    double a1,b1,c1,a2,b2,c2,x,y,d;

    printf("Enter these values a1,b1,c1,a2,b2,c2: ");
    scanf("%lf%lf%lf%lf%lf%lf",&a1,&b1,&c1,&a2,&b2,&c2);

    d=a1*b2-a2*b1;
    if((int)d==0)
    {
        printf("the value of x and y can not be determind");
    }
    else
    {
        x=(b2*c1-b1*c2)/d;
        y=(a1*c2-a2*c1)/d;
        printf("%.2lf\n %.2lf\n",x,y);
    }





    return 0;
}

