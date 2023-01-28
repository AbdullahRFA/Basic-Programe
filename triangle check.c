#include<stdio.h>

int main()

{
    int a,b,c;
    printf("Enter three integer number: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b && b==c && (a+b>c && a+c>b && b+c>a) ){
        printf("Equilateral");
    }
    else if(a==b || a==c || b==c && (a+b>c && a+c>b && b+c>a)){
        printf("Isosceles");
    }
    else if(a!=b && b!=c && a!=c && (a+b>c && a+c>b && b+c>a)){
        printf("Scalene");
    }
    else{
        printf("Impossible");
    }


    return 0;
}
