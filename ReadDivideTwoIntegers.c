/*
In the following program, two integers are read from the keyboard. If the second integer is not zero, the division
is performed in integer mode.
*/
#include <stdio.h>
int main(void)
{
int num1, num2;
printf("Enter (int)num1 and (int)num2 to compute num1/num2:\n");
scanf("%d %d", &num1, &num2);
if(num2==0) printf("cannot be divided by zero\n");
else printf("answer is %d\n", num1/num2);
exit(0);
}
