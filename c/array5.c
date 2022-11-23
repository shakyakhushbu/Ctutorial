// #include <stdio.h>    
     
// int main()    
// {    
//     int arr[1000],i,j,num,temp;
//     printf("Enter the number of elements\n");
//     scanf("%d",&num);
//     printf("Array elemrnts are\n");

//     //Calculate length of array arr    
//     int length = sizeof(arr)/sizeof(arr[0]);    
        
//     //Initialize max with first element of array.    
//     int max = arr[0];    
        
//     //Loop through the array    
//     for (int i = 0; i < length; i++) {     
//         //Compare elements of array with max    
//        if(arr[i] > max)    
//            max = arr[i];    
//     }      
//     printf("Largest element present in given array: %d\n", max);    
//     return 0;    
// }    


#include<stdio.h>
int main(){
    int i,j,arr[20],num,max;
    printf("Enter num\n");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    max = arr[i];
    for(i=0;i<num;i++){
        if (max<arr[i]){
            max=arr[i];
            
        }
    }
printf("%d",max);


}