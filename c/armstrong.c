#include<stdio.h>
int main(){
    int num,f,m,l,sum,t1;
    printf("Enter sny three digit number\n");
    scanf("%d",&num);
    f=num/100;
    t1=num%100;
    m= t1/10;
    l = t1%10;
    sum  = (f*f*f)+(m*m*m)+(l*l*l);
    if(sum==num){
        printf("The entered number is armstrong number");
    }
    else{
        printf("The given number is not armstrong number");
    }

}