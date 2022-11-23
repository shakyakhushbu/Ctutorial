// #include<stdio.h>
// int fact(int num);
// int main(){
//     int res,num;
//     printf("Enter any value\n");
//     scanf("%d",&num);
//     res=fact(num);
//     printf("Factorial of a given number is:%d",res);
// }
// int fact(int x){
//     int i,f=1;
//     for(i=1;i<=x;i++){
//         f=f*i;
        
//     }
//     return f;


// }

#include<stdio.h>
int fact(int);
int main(){
    int res,num;
    printf("Enter any number\n");
    scanf("%d",&num);
    res = fact(num);
    printf("The factorial of the given number is=%d",res);
}

int fact(int x){
    int fact=1,i;
    for(i=1;i<=x;i++){
        fact = fact*i;
    }
    
    return fact;
}