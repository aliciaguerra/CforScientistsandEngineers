/*
Assign letter grades according to 
85-100 A
75-84 B
60-74 C
40-59 D
0-39 F
*/
#include<stdio.h>
int main(void)
{
int score;
char grade;
printf("Enter a score (0<= score <= 100):");
scanf("%d", &score);
if(score>=85) grade="A";
if(score>=75) grade="B";
if(score>=60) grade="C";
if(score>=40) grade="D";
else grade="F";
printf("score: %d grade: %c\n", score, grade);
}
