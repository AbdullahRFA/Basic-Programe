#include<stdio.h>
int main()
{
 int i,N,sum=0;
 printf("Enter the last digit of the series: ");
 scanf("%d",&N);

   for(i=1;i<=N;i=i+1){
       sum=sum+i;
   }
printf("%d",sum);
   return 0;
}
