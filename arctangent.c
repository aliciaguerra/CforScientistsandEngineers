/*
In a do-loop, the following program computes arctangent (y/x) for inputs x and y. The loop is
terminated by setting a flag to 1.
*/
#include<stdio.h>
#include<math.h>
#define PI 3.141592653589793
int main(void)
{
/*test atan2() function*/
int flag;
double angle, angle_d, x, y;
flag=0;
do{
printf("Enter y and x for atan2(y,x)\n");
scanf("%lf %lf", &y, &x);
angle=atan2(y,x);
angle_d=angle*180./PI;
printf("atan2(%12.4e, %12.4e)=%12.4e(%12.4e degrees)\n", y, x, angle, angle_d);
printf("quit? y=1/n=0\n");
scnaf("%d", &flag);
}while (flag==0);
exit(0);
}
