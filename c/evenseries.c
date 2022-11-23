#include<stdio.h>
int main(){
    int i,sum,num;
    printf("Enter the number till which you want to print even number\n");
    scanf("%d",&num);
    i=1;
    while(i<=num){
        if(i%2==0){
            printf("%d\n",i);
            sum=sum+i;
           
        }
        i++;
       
    }
    printf("Sum of the even digits number is:%d\n",sum);
}