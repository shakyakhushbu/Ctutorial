#include<stdio.h>
int main(){
    int year;
    printf("Enter any year\n");
    scanf("%d",&year);
    if(year%4==0){
        printf("Its a leap year");
    }
    else{
        printf("Its not a leap year");
    }
}