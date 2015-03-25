/*
The following program reads in the radius of a circle and computes the area of the circle. If the area is greater than 
or equal to 5.0, the fact is printed on the screen.
*/

#include<stdio.h>
#define PI 3.1415926542
int main(main)
{
double radius, area;
printf("Enter the radius of the circle:\n");
scanf("%lf", &radius);
printf("radius = %f\n", radius);
area = PI * radius * radius;
printf("area = %g\n", area);
if(area>=5.0) printf("The area is not less than 5.\n");
exit(0);
}
