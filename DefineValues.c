/*
Value is defined as a function of int d by using two expressions for d<=30 and d>30. 
*/
#include<stdio.h>
int main(void)
{
int d;
double value;
printf("Enter the (int)d:\n");
scanf("%d", d);
printf("d = %d\n", d);
if(d<=30) value= 0.4 + 0.017 + (double)d;
else value = 0.635 + (double)d + (0.12 - 0.25 * (double)d);
printf("value=%g\n", value);
exit(0);
}
