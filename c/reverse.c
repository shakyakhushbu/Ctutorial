#include<stdio.h>
int main(){
    int num,rev,org,rem;
    printf("Enter any number\n");
    scanf("%d",&num);
    
    while(num>0){
        rem = num%10;
        rev = (rev*10) + rem;
        num = num/10;

    }
    printf("reverse number is:%d",rev);
}