/*
Roots of the quadratic equation.
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
double disc, x0, x1, a, b, c, xd;
printf("The program obtains roots of a quadratic equation.\n");
printf("Enter a, b, c, of ax^2+bx+c\n");
scanf("%lf %lf %lf", &a, &b, &c);
printf("a = %g \tb=%g \tc=%g\n", a, b, c");

// compute the discriminant
// discriminant=b*b-4*a*c 
disc=(b*b - 4.0*a*c)/(4.0*a*a);
xd = -0.5 * b/a;
if(disc>=0.0{
/*for real roots*/
disc=sqrt(disc);

/*compute the root with larger absolute value, x0*/
if(xd>=0.) x0=xd+disc;
else  x0=xd-disc;

//compute x1
//x0*x1=c/a
x1=c/(x0*a);
printf("x0,x1=%g\t %g\n", x0, x1);
}
else{
disc=sqrt(-disc);
printf("Complex conjugate roots: (%g, %g)\n", xd, disc);
}
exit(0);
}
