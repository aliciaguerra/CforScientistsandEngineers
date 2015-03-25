/*
The following program reads in an integer from the keyboard and determines if it is greater than 0.
*/

#include<stdio.h>
int main(main)
{
int num;
printf("Enter an integer:\n");
scanf("%d", &num);
if(num>0) printf(%d is greater than 0.\n", num);
else printf("%d is less than or equal to 0.\n", num);
exit(0);
}
