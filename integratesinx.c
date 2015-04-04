/*
Integrate f(x)=sin(x)/(1+x^2) over 0<=x<=3.
*/
#include<stdio.h>
int main(void)
{
double f, x, del_x, sum;
int flag, k, n_end, n1;
printf("Integrate f(x)=sin(x)/(1+x^2) on [0,3]\n");
do{
printf("Integrate f(x)=sin(x)/(1+x^2) on [0,3]\n");
scanf("%d", &n_end);
printf("n_end=%d\n", n_end);
n1=n_end+1;
del_x=3.0/(double)n_end;
printf("n_end=%d\t del_x=%g\n", n_end, del_x);
x=0.0;
f=sin(x)/(1.+(x*x));
sum=-0.5*f;
for(k=0; k<n1; k++){
x=(double)k * del_x;
f=sin(x)/(1.+(x*x));
sum+=f;
}
sum-=0.5*f;
sum*=del_x;
printf("sum=%f\n", sum);
printf("Would you like to continue? y=1/n=0\n");
scanf(%d", &flag);
}while(flag!=0);
exit(0);
}
