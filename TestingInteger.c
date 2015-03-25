/*
The following program reads in an integer and tests whether it is greater than 50 or not.
If it is greater than 50, the fact is printed on the screen.
*/

#include <stdio.h>
int main(main)
{
int num;
printf("Enter an integer:\n");
scanf("%d", &num);
printf("num=%d\n", num);
if(num>50) printf("num is greater than 50."\n");
exit(0);
}
