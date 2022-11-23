#include<stdio.h>
int main(){
    int i,rem,sum=0,num;
    printf("Enter any number\n");
    scanf("%d",&num);
    while(num>0){
        rem = num%10;
        sum = sum+rem;
        num = num/10;
        
    }
    printf("Sum of the digits of a number is:%d",sum);
    



}