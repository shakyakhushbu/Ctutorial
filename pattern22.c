#include<stdio.h>

int main()
{
int  k, i, j;

for(i = 1; i <= 5; i++)
{
//for loop to put space
for(j = i; j < 5; k++)
printf(" ");
//for loop for displaying star
for(k = 1; k <= i; k++)
printf("* ");
// ending line after each row
printf("\n");
}

}