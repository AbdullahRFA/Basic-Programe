#include<stdio.h>
union u
{
    char ch;
    int x;
    int y;
} uv;
int main()
{
    uv.ch='A';
    printf("%c\n\n",uv.ch);
    uv.x=17;
    printf("%d\n",uv.x);
    printf("%c\n\n",uv.ch);
    uv.y=18;
    printf("%d\n",uv.y);
    printf("%d\n",uv.x);
    printf("%c\n",uv.ch);

    return 0;
}
