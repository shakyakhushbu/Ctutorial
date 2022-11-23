#include<stdio.h>
int sum(int*,int*);
int main(){
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    
    sum(&a,&b);
    
}
int sum(int *x,int *y){
    x= 10;
    y=20;
    
    
}