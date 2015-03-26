/*
This program prints numbers 1 to 10 on the screen.
*/
#include<stdio.h>
int main(void)
{
int num;
for(num=1; num<11;num++)/*num is an integer counter*/
printf("%d", num);
printf("termination.\n");/*num 11 is at the end of the loop*/
exit(0);
}
