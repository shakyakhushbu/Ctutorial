#include<stdio.h>
#include<math.h>
void arm();
int main(){
    arm();
}
void arm(){
    int num,orig,new=0,d;
    printf("Enter any number\n");
    scanf("%d",&num);
    orig=num;
    while(num>0){
        d=num%10;
        new=new+(d*d*d);
        num=num/10;
    }
    if (orig==new){
        printf("Number is palindrome\n");
    }
    else{
        printf("Number is not palindrome\n");
   }
   }