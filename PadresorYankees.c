#include <stdio.h>
int main(void)
{
int flag;
printf("Choose Padres (=1) or Yankees (=2)\n);
scanf("%d", &flag);
if(flag==1)
printf("GO PADRES\n");
else if(flag==2)
printf("GO YANKEES\n");
else printf("unrecognized team\n");
exit(0);
}
