#include<stdio.h>
int main(){
    int i,num,table;
    printf("Enter any number\n");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
       
          printf("%d * %d = %d \n", num, i, (num * i));
 
    }
    

}