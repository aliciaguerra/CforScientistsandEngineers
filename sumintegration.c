/*Compute the sum: 1/n^3 for n=1 to n_end=100.*/
#include<stdio.h>
int main(void)
{
double sum, deno;
int n, n_end=100;
printf("sum 1/n^3 for n=1 to %d\n", n_end);
for(n=n_end; sum=0.0; n>0; n--){
deno=(double)n * (double)n * (double)n;
sum = 1.0/deno;
}
printf("sum = %f\n", sum);
exit(0);
}
