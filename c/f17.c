#include<stdio.h>
int main(){
    int i,j,k,arr1[i][j],arr2[i][j],mul[i][j],rows,cols;
    printf("enter rows\n");
    scanf("%d",&rows);
    printf("enter cols\n");
    scanf("%d",&cols);
    printf("Enter first array\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter second array\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("First array elements\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    printf("Second array elements\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    printf("Multiplication is\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            mul[i][j]=0;
            for(k=0;k<cols;k++){
                mul[i][j]=mul[i][j]+arr1[i][k]*arr2[k][j];
            }
        }
        }
        printf("Multiplication is\n");
        for(i=0;i<rows;i++){
            for(j=0;j<cols;j++){
                printf("%d\t",mul[i][j]);
            }
        }
        printf("\n");
    }

