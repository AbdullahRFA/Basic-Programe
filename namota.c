#include<stdio.h>
int main()
{
    int i=1,n=5,result;

    for( ; ; ){
        if(i>10){
            break;
        }
        result=n*i;printf("%d * %d = %d\n",n,i,result); i++;
    }








    return 0;
}
