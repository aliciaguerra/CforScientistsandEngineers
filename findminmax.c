/* 
Compute y(x) = 4x^2-3x+2 for -10<=x<=10 at the increment of del_x=0.5. and find y_max and y_min.
*/
#include<stdio.h>
int main(void)
{
  double x, y, y_max, y_min, del_x,=0.5;
  x=-10;
/*compute y(-10) to initialize y_min and y_max*/
y=4.*x*x - 3.*x + 2;
y_max=y;
y_min=y;
printf("\t x\t\t y(x)\n");
do{
  y=4.*x*x-3.*x+2;
  if(y>y_max) y_max=y;
  if(y<y_min) y_min=y;
  printf("%f\t %e\n", x, y);
  /*update x*/
  x += del_x;
} while(x<=10.000001);/*to execute the case x=10.*/
/***A for-loop is simpler than do() while()***/
printf("y_max=%g \t y_min=%g", y_max, y_min);
}


