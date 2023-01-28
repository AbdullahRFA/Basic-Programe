#include<stdio.h>
#include<math.h>
void Binary_Decimal(int n)
{
    int decimal=0,power=0,digit;
    while(n!=0)
    {
        digit=n%10;
        decimal += digit*pow(2,power++);
        n=n/10;
    }
    printf("Decimal=%d",decimal);

}

int main()
{
    int n;
    printf("Enter a binary number: ");
    scanf("%d",&n);
    Binary_Decimal(n);
}
