#include<stdio.h>
int main(void)
{
int k=5, m;
double x, y=12.9999999;
m=(int)y; /*changes the value in y to an integer.*/
/*m becomes 12, information is lost.*/
x=(double k); /*change the value in k to a double*/
/*no information is lost*/
printf("(int)%f = %d and (double)%d = %f\n", y, m, k, x);
exit(0);
}
