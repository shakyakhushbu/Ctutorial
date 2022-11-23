#include<stdio.h>
void arm(int);
int main(){
    int a, b;
    printf("Enter a\n");
    scanf("%d",&a);
    arm(a);
    
}

void arm(int x){
int new,d,orig;
orig=x;
    while(x>0){
        d = x%10;
        new=new+(d*d*d);
        x=x/10;
    }
    if(new==orig){
        printf("Number is armstrong\n");
    }
    else{
        printf("Number is not armstrong\n");
    }
}