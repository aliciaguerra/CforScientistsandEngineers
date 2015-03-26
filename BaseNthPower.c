/*Raise a base to the nth power for int n>0.*/
#include<stdio.h>
int main(void)
{
double base, p;
int n, k;
printf("Enter base:");
scanf("%lf", &base);
printf("Enter the exponent in integer:");
scanf("%d", &n);
printf("Raise the base:%.4f to %d-th power\n", base, n);
p=1.0;
if(n>0)
for(k=1;k<=n;k++) p *=base; //p=p*base
printf("%.4f ^ %d = %g\n", base, n, p);
exit(0);
}
