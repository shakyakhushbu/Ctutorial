// #include<stdio.h>
// int main(){
//     int arr[1000],i,j,num,temp;
//     printf("Enter the number of elements\n");
//     scanf("%d",&num);
//     printf("Array elemrnts are\n");

//     for(i=0;i<num;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Reversse of an array is:\n");
//     for(i=num-1;i>=0;i--){
//         printf("%d\n",arr[i]);
//     }

// }

#include<stdio.h>
int main(){
    int num,i,j,arr[20];
    printf("Enter the number is\n");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d\n",&arr[i]);
    }

    for(i=num-1;i>=0;i--){
        printf("%d\n",arr[i]);
    }
}