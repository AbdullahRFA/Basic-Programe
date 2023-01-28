#include<stdio.h>
int main()
{
    int i,n=5,m=0;
   // scanf("%d",&n);

   for(n=1;n<=20;n++){
    for(i=1;i<=10;i++){
        m=n*i;
        printf("%d * %d = %d\n",n,i,m);
    }

   }


    return 0;
}
