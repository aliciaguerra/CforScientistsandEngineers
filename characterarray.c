/*
This example uses a character array to process a string.
*/
#include<stdio.h>
#include<string.h>
int main(void)
{
char str[80];
printf("Enter a string (less than 80 characters:\n");
while(strlen(gets(str))==0);
/*to read a non-blank string from the keyboard*/
/*gets(str); may or may not work, see Note3*/
printf("%s\n", str);
exit(0);
}
