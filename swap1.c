#include<stdio.h>

int main()

{
    int num1,num2;

    printf("Enter two numbers:");//num1=5,num2=10

    scanf("%d%d",&num1,&num2);

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;


    printf("two numbers are:%d %d",num1,num2);

    return 0;




}
