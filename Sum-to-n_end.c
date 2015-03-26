/*Compute the sum: 1/n^2 for n=1 to n_end.*/
#include<stdio.h>
int main(void)
{
double sum, deno;
int n, n_end;
printf("Enter n_end for sum 1/n^2 from n=1 to n_end\n");
scanf("%d", &n_end);
for(n=n_end, sum=0.0; n>0; n--){
deno=(double)n*(double)n;
sum+=1./deno;
}
printf("Sum=%f\n", sum);
exit(0);
}
