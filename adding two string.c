#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    gets(a);
    gets(b);
    int i;
    int d=strlen(a);
    for(i=0;b[i]!='\0';i++)
    {
        a[d+i]=b[i];
    }
    a[d+i]='\0';
    printf("%s",a);
    return 0;
}
