#include<stdio.h>
int main()
{
    char k;
    printf("Enter any characyer to check capital Or small case: ");
    scanf("%c",&k);

    if(k>='a' && k<='z'){
        printf("%c is a small letter",k);

    }
    else if(k>='A' && k<='Z'){
        printf("%c is a capital leter",k);
    }




    return 0;
}
