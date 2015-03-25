/*
Compute the monthly payment of a five-year auto loan at the annual interest rates of 7.0%, 8.0% and 9.0%.
The price of the car is entered from the keyboard. Use the formula for equal-payment-series capital recovery.
monthly payment=price*i(1+i)^n/{(1+i)^n - 1}
where i=annual_rate/12 (monthly interest rate) and n=the total number of payments. To compute (1+i)^n use
pow(1.0+i, (double)n). 
*/

#include<stdio.h>
#include<math.h>
int main(void)
{
int k, months=60;
double annual_rate, m_rate, price, payment, fact;

printf("Enter the price of the car:");
scanf("%lf", &price);
printf("\nprince=$%.2f; 5-year loan\n", price);

for(k=7; k<10; k++){
annual_rate = (double)k/100.0;
m_rate=annual_rate/12.0; //monthly rate
/*compute (1+m_rate)^months for 5-year loan*/
fact=pow(1.+m_rate, 36.);
payment=price*m_rate*fact/(fact-1.);
printf("For annual rate: %4.2f monthly payment is %.2f\n", annual_rate, payment);
}
printf("\n");
}

