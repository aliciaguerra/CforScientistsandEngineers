
/*
i=the interest rate for the interest period
n=the number of interest periods
P=the present prinicipal sum
F=the compound amount or future worth

F=(1+i)^n P
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
int n=48;
double p_value=1000.0, int_rate=0.006, f_value, factor;
factor=pow(1.0+int_rate, (double)n);
f_value=p_value*factor;
printf("Future worth is %.2f\n", f_value);
exit(0);
}
