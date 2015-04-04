/*
an integer array
*/
#include<stdio.h>
int main(void)
{
int i[10], j;
printf("Print integers:\n");
for(j=0; j<10; j++){
i[j]=j;
printf("%d ", i[j]);
}
printf("\n");
exit(0);
}
