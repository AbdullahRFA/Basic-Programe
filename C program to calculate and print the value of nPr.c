#include<stdio.h>
int fact(int num)
{
    if(num==0)
    {
        return 1;
    }
    return num*fact(num-1);
}
int main()
{
    int n,r;
    printf("Enter the value of n and r: ");
    scanf("%d%d",&n,&r);
    int npr_res;
    npr_res=fact(n)/fact(n-r);
    printf("the value of  p(%d,%d)  is %d",n,r,npr_res);


    return 0;
}
/*#include <stdio.h>

void main()
{
    int n, r, npr_var;

    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("\nEnter the value of r:");
    scanf("%d", &r);

    /* nPr is also known as P(n,r), the formula is:
     * P(n,r) = n! / (n - r)! For 0 <= r <= n.
     */
  /*  npr_var = fact(n) / fact(n - r);
    printf("\nThe value of P(%d,%d) is: %d",n,r,npr_var);
}
// Function for calculating factorial
int fact(int num)
{
    int k = 1, i;
    // factorial of 0 is 1
    if (num == 0)
    {
        return(k);
    }
    else
    {
        for (i = 1; i <= num; i++)
    {
            k = k * i;
	}
    }
    return(k);
}*/
