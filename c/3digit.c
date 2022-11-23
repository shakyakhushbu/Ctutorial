#include<stdio.h>
int main(){
    int i ,f,l,m, sum ,num,t1;
    printf("Enter any three digit number\n");
    scanf("%d",&num);
    f=num/100;
    printf("First term is:%d\n",f);
    t1=num%100;
    m=t1/10;
    printf("Middle term is:%d\n",m);
    l=t1%10;
    printf("Last term is:%d\n",l);
    sum=f+m+l;
    printf("Sum of the three digit number is:%d",sum);



}