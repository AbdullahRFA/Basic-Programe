#include<stdio.h>

int main()

{
    char ch;

    ch='k';

    if(ch>='a' && ch<='z'){
        printf("%c is lower case",ch);
    }

    else if(ch>='A' && ch<='Z'){
        printf("%c is upper case");
    }

    return 0;
}
