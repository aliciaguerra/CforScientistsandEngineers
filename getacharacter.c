#include<stdio.h>
int main(void){
char ch;
do{
printf("Enter a character (a-z, A-Z); q to quit:\n");
do{
ch=getchar();
} while(ch>'z' || ch<'A'); /*bullet proofing getchar()*/
switch(ch){
case 'a':
printf("Now is");
case 'b':
printf("the time");
case 'c':
printf("for all good men/women.\n");
break;
case 'd':
printf("This summer");
case 'e':
printf("soldier.\n");
break;
default:
printf("No message.");
}
}while(ch!='q');
exit(0);
}
