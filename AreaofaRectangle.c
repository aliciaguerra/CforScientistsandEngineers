/*
This program computes the area of a rectangle whose dimensions are specified.
*/
#include<stdio.h>
int main(void)
{
int width, height;
/*For integers, we use "%d" for both printf and scanf.*/
printf("Enter width (integer) and height(integer)\n");
scanf("%d %d, &width, &height);
printf("Width=%d \t Height = %d \n", width, height);
printf("Area is %d\n", width*height);
exit(0);
}
