#include<stdio.h>
int main(){
    int arr[1000],i,j,num,temp;
    printf("Enter the number of elements\n");
    scanf("%d",&num);
    printf("Array elemrnts are\n");

    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<num;i++)
    {
        if(arr[i]==0){
            temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1] = temp;
        }
    }
    printf("Array elemrnts are\n");

    for(i=0;i<num;i++){
        printf("%d",arr[i]);
    }
}