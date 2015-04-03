/*
Advance x from a to b in n_end steps in a for-loop.
*/
#include<stdio.>
int main(void)
{
int i, n_end=30;
double f, x, a=0.0, b=3.0;
del_x=(b-a)/(double)n_end;
for(i=0; i<n_trap+1; i++){
x=a+(double)i*del_x;
f=1.+x*x;
printf("i=%3d\t x=%6.2f \t f=%12.6e\n", i, x, f);
exit(0);
}
