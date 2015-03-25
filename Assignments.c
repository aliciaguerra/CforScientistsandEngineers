#include<stdio.h>
int main(void)
{
double num1 = 10.5, x, y, z;
int i1=3, k;
/*Recall the assignment is from right to left.*/
k=10.7; /*10.7 is placed in the memory location of k.*/
x=y=z=0.; /**multiple assignments*/
y=num1;
z=z+10; /*z is assigned the value of z plus 10.*/
printf("x=%f y=%f z=%f i1=%d k=%d\n", x, y, z, i1, k);
exit(0);
}
