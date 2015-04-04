#include<stdio.h>
#include<string.h>
int main(void)
{
char message[81];
int flag, k;
printf("Choose Padres (=1) or Yankees (=2)\n");
scanf("%d", &flag);
if(flag==1)
for(k=0; k<10; k++) printf("Go PADRES\n");
else if(flag==2)
for(k=0; k<5; k++) printf("Go Dodgers\n");
else printf("unrecognized team\n");
printf("\n");
printf("Enter a message for Kevin Brown\n");
while(strlen(gets(message))==0);
/*gets a nonblank string*/
for(k=0; k<10; k++)
printf("%s\n", message);
exit(0);
}
