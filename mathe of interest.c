#include<stdio.h>

int main()
{
    double loan_amount,interest_rate,number_of_year,total_amount,monthly_amount;
    printf("Enter the loan_amount: ");
    scanf("%lf",&loan_amount);

    printf("Enter the number_of_year: ");
    scanf("%lf",&number_of_year);

    printf("Enter the interes_rate: ");
    scanf("%lf",&interest_rate);

    printf("Enter the total_amount: ");

    total_amount=loan_amount+loan_amount*number_of_year*g(interest_rate/100.00);

    monthly_amount=total_amount/(number_of_year*12);

    printf("Enter the total_amount %.2lf\n",total_amount);

    printf("Enter the monthly_amount %.2lf\n",monthly_amount);



    return 0;
}
