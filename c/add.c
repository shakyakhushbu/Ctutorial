#include<stdio.h>
int main(){
    int num,f,l,sum;
    printf("Enter any four digit num\n");
    scanf("%d",&num);
    
        f=num/1000;
        l=num%10;
        sum = f+l;
        printf("The sum of first and last digit number is:%d",sum);
   
}
