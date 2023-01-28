#include<stdio.h>

int main()

{
    int a,i;

    for(a=1;a<=100;a=a+1){
        for(i=1;i<=10;i=i+1){
            printf("%d*%d=%d\n",i,a,i*a);
        }
    }
    return 0;
}
