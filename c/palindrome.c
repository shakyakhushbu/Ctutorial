#include<stdio.h>
int main(){
    int num,temp,rev, original,rem,sum=0;
    printf("Enter any number\n");
    scanf("%d",&num);
    original=num;
   
    while(num>0){
        rem=num%10;
        rev = (rev*10)+rem;
        num = num/10;
    }
    if(original == rev){
        printf("The number is palindrome");
    }
    else{
        printf("The number is not palindrome");
    }

}