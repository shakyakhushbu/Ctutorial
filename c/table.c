#include<stdio.h>
int main(){
    int i,num,table;
    printf("Enter any number\n");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        table=i*num;
        printf("%d*%d=%d\n",num,i, (i*num));

    }
    

}