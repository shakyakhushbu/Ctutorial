#include<stdio.h>
void sum(int,int);
int main(){
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    sum(a,b);
}

void sum(int x,int y){
    int sum = x+y;
    printf("The sum of the given value=%d\n",sum);

}