// #include<stdio.h>
// int main(){
//     int num,count=0,i;
//     printf("Enter any number\n");
//     scanf("%d",&num);
//     if(num==2){
//         printf("NUmber is prime number");
//     }

//     for(i=2;i<num;i++){
//         if(num%i==0){
//             count++;
//         }
//     }
//     if(count==0){
//         printf("Prime");
//     }
//     else{
//         printf("Not prime");
//     }

// }


#include<stdio.h>
int prime(int);
int main(){
    int num,res;
    printf("Enter any number\n");
    scanf("%d",&num);
    res = prime(num);
    if(res==1){
        printf("Number is prime\n");
    }
    else{
        printf("Number is not prime\n");
    }


}

int prime(int x){
    int count=0 , i;
    if(x==2){
        printf("NUmber is prime number\n");
    }
    for(i=2;i<x;i++){
        if(x%i==0){
            count++;
        }

    }
    if(count==0){
        return 1;
    }
    else{
        return 0;
    }
}