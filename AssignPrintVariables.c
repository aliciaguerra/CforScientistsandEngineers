#include <stdio.h>
main()
{
char ch;
float f;
double d;
ch="A";
f=100.123F;
d=1.054e-10;
/*For characters, we use "%c" for printf.*/
printf("ch is %c\n", ch);
/*For floats, we use %f for printf, just like doubles.*/
printf("f is %f\n", f);
/*The output is rounded to two digits.*/
printf("f is %.2f\n", f);
/*Since the double is in scientific notation, we use "%e" for printf.*/
printf("d is %e\n", d);
/*The output is rounded to four digits.*/
printf("d is %.4e\n", d); 
exit(0);
}
