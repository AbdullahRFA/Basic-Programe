#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char a[100];
    int i,decimal=0,position,len;
    printf("Enter the binary number: ");
    scanf("%s",a);
    len=strlen(a);
    position=len-1;
    for(i=0;i<len;i++)
    {
        decimal +=(a[i]-'0')*pow(2,position);
        position--;
    }
    printf("%d\n",decimal);


    return 0;
}
