/*
In the program nested if/else statements are used to echo a typed number.
*/
#include<stdio.h>
int main(void)
{
int flag;
printf("Enter an integer, 1, 2, or 3\n");
scanf("%d", &flag);
if(flag==1) printf("you typed 1.\n");
else if(flag==2) printf("You typed 2.\n");
else if (flag==3) printf("you typed 3.\n");
else printf("You typed an unrecognized value.\n");
exit(0);
}
