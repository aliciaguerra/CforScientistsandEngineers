/*
This program computes the distance between two points.
The x and y coordinates of two points  (x1,y1), (x2,y2) are defined in the declaration.
The output is the distance between the two points.
*/

#include<stdio.h>

/*In order to use sqrt(), we include the math library.*/
#include<math.h>

int main(main)
{

/*We declare and initialize our variables.*/
double x1=2., y1=2., x2=5., y2=7.;
double del_x, del_y, distance;
del_x=x2-x1;
del_y=y2-y1;
distance=sqrt(del_x*del_x + del_y*del_y);

/* We print the distance using %g, which is for doubles, which lets the CPU decide the optimal choice between %e and %f. */
printf("The distance is %g\n", distance);

/*Return(0) exits from the function while exit(0) exits from the program.*/
exit(0);
}
