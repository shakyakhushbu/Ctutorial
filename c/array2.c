#include<stdio.h>
int main(){
    int arr[1000],i,j,num,temp;
    printf("Enter the number of elements\n");
    scanf("%d",&num);
    printf("Array elemrnts are\n");

    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<num;i++){
        for(j=i+1;j<num;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Ascending order element:");
    for(i=0;i<num;i++){
        printf("%d\t",arr[i]);
    }

}