#include<stdio.h>
int sum();
int main(){
    int res;
    res=sum();
    printf("The result of two number sare\n=%d",res);
}
int sum(){
    int a ,b,c;
    printf("Enter a\n");
    scanf("%d",&a);
    printf("Enter b\n");
    scanf("%d",&b);
    c=a+b;
    return c;
}