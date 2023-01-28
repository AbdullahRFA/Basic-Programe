#include<stdio.h>
int main()
{
    int a,b,x,y;
    scanf("%d%d",&a,&b);
    if(a<b){
        x=a;
    }
    else {
        x=b;
    }

    for( ;x>=1;x--){

        if(a%x==0 && b%x==0)
            break;
    }

    y=(a*b)/x;

    printf("the lcd is %d",y);


    return 0;
}
