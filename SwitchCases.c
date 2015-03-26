#include<stdio.h>
#include<math.h>
int main(void)
{
int menu, a, b;
printf("There are two parts: part 1 and part 2.\n");
printf("Enter the part number to execute (1 or 2):");
scanf("%d", &menu);
/*Form a switch to execute one of the two-part assignments*/
switch(menu){
case 1:
/*insert part 1 statements*/
printf("\nPart 1:\n\n");
printf("Enter two integer values:");
scanf("%d %d, &a, &b);
if(a>b) printf("%d", a);
else if(a==b) printf("%d == %d\n", a, b);
else printf("%d\n", b);
/*the end of the case 1 insertion*/
break;
case 2:
/*insert your part 2 statements*/
printf("\nPart 2:\n\n");
printf("Enter a double floating-point value");
scanf("%lf", &x);
/**f(x)=x*x*x-x*x-9.*x+9. if x>=0.
 f(x) = 9.0+sin(x) for x<0. */
if(x>=0.0) f_x=((x-1.0)*x-9.0)*x+9.0;
else f_x=9.0+sin(x);
printf("f(%g)=%9.3e\n", x, f_x);
break;
default:
printf("part %d does not exist.\n", menu);
}
exit(0);
}
