#include<stdio.h>
int main(){
    int i,num ,sum=0;
    printf("Enter any number\n");
    scanf("%d",&num);
    i=1;
    while(i<=num)
    {
        printf("%d\n",i);
        sum = sum+i;
        i++;
    }
    printf("Sum of n digit number is:%d\n",sum);
    printf("Bye.\n");
}