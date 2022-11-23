#include<stdio.h>
int main(){
    int x,y,p=1,i;
    printf("Enter the value for x\n");
    scanf("%d",&x);
    printf("Enter the value for y\n");
    scanf("%d",&y);
    for(i=1;i<=y;i++){
        p=x*p;
    }
    printf("%d\n",p);
}