#include<stdio.h>

/*We do not end the definition of PI with a semicolon.*/
#define PI 3.1415926536 

int main(void){

/*We declare our double identifiers.*/
double area, radius=2.5;

/*We then compute the area of a circle.*/
area = PI * radius * radius;
/*For doubles, for printf we use "%f".*/
printf("radius=%f area=%f\n", radius, area);
exit(0);
}
