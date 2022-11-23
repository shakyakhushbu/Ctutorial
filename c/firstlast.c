#include<stdio.h>
int main(){
    int num,sum,f,l;
    printf("Enter any number\n");
    scanf("%d",&num);
    l = num%10;
    while(num>0){
        num = num/10;
    }
    f=num;
   
    sum = f+l;
    printf("Sum of the first digit and last digit number is:%d",sum);
}