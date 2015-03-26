/*character input by using getchar()*/
#include<stdio.h>
int main(void)
{
char ch;
printf("Enter a character:\n");
ch=getchar(); //read a character
printf("You typed: %c.\n", ch);
exit(0);
}
