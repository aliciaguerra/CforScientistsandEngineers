#include<stdio.h>
#define PI 3.141592654
int main(void)
{
int degrees;
double radians;
degrees=0;
printf("Degrees to Radians\n");
do{
radians=degrees*PI/180.;
printf("%6d %9.6f\n", degrees, radians);
degrees +=20;
}while(degrees<=360);
exit(0);
}
