#include<stdio.h>
void fact(int);
int main(){
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    fact(num);
}
void fact(int x){
    int i=1,f=1;
    for(i=1;i<=x;i++){
   f=f*i;
    
    }
    printf("Factorial is:%d",f);


}
