#include<stdio.h>
int series(int);
int main(){
    int num,res;
    printf("Enter any number\n");
    scanf("%d",&num);
    res=series(num);
    printf("Sum is=%d\n",res);

}
int series(int x){
    int i,sum=0;
    for(i=1;i<=x;i++){
        if(i%2==0){
            printf("%d\n",i);
            sum = sum+i;
        }
        
    }
    return sum;
        
        

}