#include<stdio.h>
int main(){
    int a=20,b=10;
    printf("Value of A  before swapping is:%d\n",a);
    printf("Value of B  before swapping is:%d\n",b);
    a=a+b;
    b=a-b;
    b=a-b;
    printf("The value of A after swapping is:%d",a);
    printf("The value of b after swapping:%d",b);

    

}