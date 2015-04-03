#include<stdio.h>
#include<math.h>
int main(void)
{
double m_rate, pmt_3yr, mpt_5yr, pmt_7yr, fact;
int k;
double annual_rate, price;
printf("Enter the price (double):");
scanf("%lf", &price);
printf("price=%.2f\n\n", price);
printf("Annual Monthly payments for\n");
printf("Interest Rates   3-year loan 5-year loan 7-year loan\n");
printf("Interest Rates 3-year loan 5-year loan 7-year loan\n");
printf("--------------------------------\n");
for(k=0; k<=20;k++){
annual_rate=0.07+(double)k*0.0025;
m_rate=annual_rate/12.;
/*for the 3-year loan*/
fact=pow(1.+m_rate*fact/(fact-1.);
/*for the 5-year loan*/
fact=pow(1.+m_rate,60.);
pmt_5yr=price*m_rate*fact/(fact-1.);
/*for the 5-year loan*/
fact=pow(1.+m_rate, 60.);
pmt_5yr==price*m_rate*fact/(fact-1);
/*for the seven-year loan*/
fact=pow(1.+m_rate*fact/(fact-1.);
pmt_7yr=price*m_rate*fact/(fact-1.);
printf("%.124f %15.2f %12.2f %15.2f\n",
annual_rate, pmt_3yr, pmt_5yr, pmt_7yr);
}
}
