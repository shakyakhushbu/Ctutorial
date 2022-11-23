#include<stdio.h>
int main(){
    int i,sum,num;
    printf("Enter te number till ewhich you want to print odd number\n");
    scanf("%d",&num);
    i=1;
    while(i<=num){
        if(i%2!=0){
            printf("%d\n",i);
            sum = sum +i;
        }
         i++;
         
       
    }
  
        
        
        printf("Sum of the odd numbers is:%d",sum);
}