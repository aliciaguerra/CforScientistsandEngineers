/*
A division a/b, is performed for two double floating-point values defined from the keyboard.
*/

#include<stdio.h>
int main(void)
{
double a,b, quot;
printf("Enter two doubles for a/b\n");
scanf("%lf %lf", &a, &b);
//fabs=absolute value
if(fabs(b) < 1.e-20)
printf("Denominator is almost zero.\n");
else{
quot=a/b;
printf("a/b=%g\n", quot);
}
exit(0);
}
