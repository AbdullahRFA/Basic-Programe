#include<stdio.h>
int main()
{
    char k;
    printf("Enter any character toi check its vowel or not: ");
    scanf("%c",&k);

    if(k=='a' || k=='A' || k=='e' || k=='E' || k=='i' || k=='I' || k=='o' || k=='O' || k=='u' || k=='U'){
        printf("%c is a vowel",k);
    }
    else{
        printf("%c is a consonant",k);
    }



    return 0;
}
