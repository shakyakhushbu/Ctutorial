#include<stdio.h>
int sum();
int main(){
    int num,res;
    printf("enter any number\n");
    scanf("%d",&num);
    res=sum(num);
    printf("The sum is=%d\n",res);

}
int sum(int x){
    int f,l,d,sum;
    f = x%10;
    while(x>10){
        d=x%10;
        x=x/10;
        
    }
    printf("last number is=%d\n",x);
    sum=f+x;
    return sum;

    }
