#include <stdio.h>
#include <math.h>
#define PI 3.141592654
int main(main)
{
double angle_deg, angle_rad, csa, sna;
/*
To compute cos(30 degrees) and sin(30 degrees), we convert degrees to radians before using sin() and cos().
*/
angle_deg=30.;
angle_rad = angle_deg * (PI/180);
csa = cos(angle_rad);
sna = sin(angle_rad);
printf("cos(%f degrees) = %f  sin(%f degrees) = %f\n", angle_deg, csa, angle_deg, sna);
exit(0);
}
