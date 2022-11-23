#include<stdio.h>
int main(){
    int arr1[20][20],arr2[20][20],mul[20][20],i,j,row,col,k;
    printf("Enter the number of col\n");
    scanf("%d",&col);
    printf("Enter the number of row\n");
    scanf("%d",&row);


printf("ENter firts\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){

            scanf("%d",&arr1[i][j]);
        }
    }
printf("ENter second\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){

            scanf("%d",&arr2[i][j]);
        }
    }

    printf(" firts\n");
    
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){

            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }

    printf(" second\n");
    ;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){

            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }

    
    printf("Add ");

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            mul[i][j]=0;
            for(k=0;k<col;k++){
                mul[i][j]+=arr1[i][k]*arr2[k][j];
            }
                    }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){

            printf("%d\t",mul[i][j]);
        }
    }


}