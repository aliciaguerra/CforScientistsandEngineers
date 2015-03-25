/*
F={((1+i)^n) - 1}/iA
The equal series compund-amount factor is {(1+i)^n-1}/i.
Compute the future value and tax-free interest earning of your of your ROTH IRA if you contribute $100 at the end of every 
month for 40 years with the monthly interest rate 0.085/12.0. 
*/
#include<stdio.h>
#include <math.h>
{
int months, years=40;
double m_payment=100.0, f_value, i_rate, temp;
double earning, t_payments;
printf("\nROTH IRA ASSESSMENT PROGRAM\n\n");
/*The monthly interest rate.*/
i_rate=0.085/12.0;
/*The number of contributions.*/
months=12*years;
printf("Monthly contributions:$%.2f; Number of Years: %dyears\n", m_payment, years);
printf("at the monthly interest rate: %.8f\n", i_rate);

/*Compute the total amount of the IRA contribution.*/
t_payments=(double)months*m_payment;

/*Compute the future value.*/
temp=pow(1.0+i_rate, (double)months);
f_value=(temp-1.0)/i_rate*m_payment;
printf("\nFuture value: $%.2f; Total contributions: %.2f\n", f_value, t_payments);
printf("Your tax-free interest earning will be $%.2f.\n\n", f_value-t_payments);
exit(0);
}
