#include<stdio.h>
int main(){
    int arr[1000],num,sum=0;
    int i;
    printf("Enter the number of elements\n");
    scanf("%d",&num);
    printf("Summ of array is:\n");

    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++){
        sum = sum + arr[i];
    }
    printf("Sum of the array=%d",sum);


}