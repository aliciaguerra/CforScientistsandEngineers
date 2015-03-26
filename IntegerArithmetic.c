#include <stdio.h>
int main(void)
{
int a,b,c,ce;
char op,eq;
printf("Integer Arithmetic Operations with +,-,*,/, and % \n");
printf("Input Format: a+b=c; You may use -, *, /, and % instead of +\n");
printf("For example, 3+2=5; the program checks the c value\n");
printf("\nEnter an integer operation:");
scanf("%d %c %d %c %d", &a, &op, &b, &eq, &c);
printf("\nYou entered %d %c %d %c %d\n", a, op, b, eq, c);
switch(op){
/*Use switch for integer operations and compute a (op) b = ce*/
case '+':
ce=a+b;
break;
case '-':
ce=a-b;
break;
case '*':
ce=a*b;
break;
case '/':
if(b!=0) ce=a/b;
else{ printf("\n***divided by zero***\n");
exit(101);}/*Emergency termination = exit(101)*/
break;
case '%':
ce=a%b;
break;
default:
printf("\n***unrecognized operator %c ***\n\n", op);
exit(102); /*emergency exit=exit(102)*/
}
if(c==ce){
printf("Yes, %d %c %d = %d\n", a, op, b, ce);
printf("You are great!");
} else printf("No, %d %c %d = %d\n\n", a, op, b, ce);
exit(0); /*normal termination*/
}
