#include<stdio.h>

int main()

{
    float c,f;

    printf("Enter centigrage temperature:");

    scanf("%f",&c);

    f=(c*1.8)+32;

    printf("farhanhite tenperature:%.2f",f);

    return 0;
}
