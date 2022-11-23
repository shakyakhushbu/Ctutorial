#include<stdio.h>
int sum(int,int);
int main(){
    int a,b,res;
    printf("Enter a\n");
    scanf("%d",&a);
    printf("Enter a\n");
    scanf("%d",&b);
    res=sum(a,b);
    printf("The value of sum is=%d",res);
    sum(a,b);


}
int sum(int x,int y){
    int c;
    c=x+y;
    
    return c;
}