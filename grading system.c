#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    if(0<=a<=32){
        printf("F");
    }
    else if(33<=a<=39){
        printf("D");
    }
     else if(40<=a<=49){
        printf("C");
    }
    else if(50<=a<=59){
        printf("B");
    }
     else if(60<=a<=69){
        printf("A-");
    }
     else if(70<=a<=79){
        printf("A");
    }
     else{
        printf("A+");
    }

    return 0;
}
