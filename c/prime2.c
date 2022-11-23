#include<stdio.h>
int main(){
    int i,num;
    printf("Enter any number\n");
    scanf("%d",&num);
    if(num==2){
        printf("%d",num);
    }
    else{
        for(i=2;i<num/2;i++)
    {
            if(num%i!=0){
                printf("%d",i);
            }
            
        }
    }
}