#include<stdio.h>
int main(){
    int arr[1000],size,i,max;
    printf("Enter the number of elements:\n");
    scanf("%d",&size);
    printf("Enter array elements:\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[i];
    for(i=0;i<size;i++)
    {
        if(max<arr[i]){
        max=arr[i];
        }
       
    }
printf("Maximum element=%d\n",max);
}