#include<stdio.h>
int fact(int num);
int main(){
    int res;
    res=fact(6);
    printf("Factorial of a given number is:%d",res);
}
int fact(int x){
    int i,f=1;
    for(i=1;i<=x;i++){
        f=f*i;
        
    }
    return f;


}