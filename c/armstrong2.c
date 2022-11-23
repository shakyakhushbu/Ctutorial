#include<stdio.h>
int main(){
    int num,r,sum=0,temp;
    printf("Enter any three digit number\n");
    scanf("%d",&num);
    temp = num;
    while(temp>0){
        r=temp%10;
        sum = sum +(r*r*r);
        temp  = temp/10;
        
        
    }
    if(sum == num){
        printf("The given number is armstrong number");

    }
    else{
        printf("The given number is not an armstrong number");
    }

}