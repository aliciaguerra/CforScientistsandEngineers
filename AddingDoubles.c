#include<stdio.h>
int main(void)
{
double x, y;
printf("Enter two doubles for addition:");
/*For scanf, we use "%lf" for doubles.*/
scanf("%lf %lf", &x, &y);
/*If one uses "%g, an optimal choice is made between "%f" and "%e" is made by the CPU.*/
printf("%g + %g = %g\n", x, y, x+y);
exit(0);
}
