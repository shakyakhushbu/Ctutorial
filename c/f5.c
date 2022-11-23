#include<stdio.h>
void power(int,int);
int main(){
    int a ,b;
    printf("Enter the value of x and y\n");
    scanf("%d%d",&a,&b);
    power(a,b);
}
void power(x,y){
    int p;
    for(p=1;p<=y;p++){
        p=p*x;
    }
    printf("Power of the given number is:\n");
    scanf("%d", p);

}