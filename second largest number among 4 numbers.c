#include<stdio.h>
int main()

{
    int a,b,c,d;
    printf("Enter four number: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                if(b>c)
                {
                    if(b>d)
                    {
                        printf("%d is the second largest number",b);
                    }
                    else("%d is the second largest number",d);
                }
                else if(c>d)
                {
                    printf("%d is the second largest number",c);
                }
                else("%d is the second largest number",d);


            }
            else
            {
                printf("%d is the second largest number",a);
            }
        }
        else if(c>d)
        {
            if(d>a)
            {
                if(d>b)
                {
                    printf("%d is the second largest number",d);
                }
                else
                {
                    printf("%d is the second largest number",b);
                }
            }
            else if(a>c)
            {
                printf("%d is the second largest number",c);
            }
            printf("%d is the second largest number",a);
        }
        else if(c>a)
        {
            if(c>b)
            {
                printf("%d is the second largest number",c);
            }
            else
            {
                printf("%d is the second largest number",b);
            }
        }
        else if(a>b)
        {
            printf("%d is the second largest number",a);
        }
        else
        {
            printf("%d is the second largest number",b);
        }
    }
    else if(b>c)
    {
        if(b>d)
        {
            if(a>c)
            {
                if(a>d)
                {
                    printf("%d is the second largest number",a);
                }
                else
                {
                    printf("%d is the second largest number",d);
                }
            }
            else if(c>d)
            {
                printf("%d is the second largest number",c);
            }
            else("%d is the second largest number",d);
        }
        else
        {
            printf("%d is the second largest number",b);
        }
    }
    else if(c>d)
    {
        if(b>a)
        {
            if(b>d)
            {
                printf("%d is the second largest number",b);
            }
            else
            {
                printf("%d is the second largest number",d);
            }
        }
        else if(a>d)
        {
            printf("%d is the second largest number",d);
        }
        else
        {
            printf("%d is the second largest number",a);
        }
    }
    else if(a>b)
    {
        if(a>c)
        {
            printf("%d is the second largest number",a);
        }
        else
        {
            printf("%d is the second largest number",c);
        }
    }
    else if(b>c)
    {
        printf("%d is the second largest number",b);
    }
    else
    {
        printf("%d is the second largest number",c);
    }
    return 0;
}


