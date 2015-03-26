#include<stdio.h>
#define PI 3.1415926536
int main(void)
{
int k;
double radius, area, volume;
printf("\nArea and volume of sphere\n\n");
/*Table header*/
printf("-----------------------------------\n");
printf("      radius    area     volume\n");
printf("-----------------------------------\n");
/*A loop for the radius*/
for(k=0;k<11;k++){
radius = 1.0 + 0.1 * (double)k;
area = 4.0 * PI * radius * radius;
volume = 4.0/3.0 * PI * radius * radius * radius;
printf("%7.lf %15.3f %15.3f\n", radius, area, volume);
}
}
