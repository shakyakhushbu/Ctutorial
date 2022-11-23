#include<stdio.h>    
  
int main(){  
int a[20][20],b[20][20],add[20][20],row,c,r,i,j,k;    

printf("enter the number of row=");    
scanf("%d",&r);    
printf("enter the number of column=");    
scanf("%d",&c);    
printf("enter the first matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);  
}
}    



printf("enter the second matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&b[i][j]);    
}    
}    

printf("First matrix\n");

for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",a[i][j]);  
}
printf("\n");
}    

printf("Second matrix\n");

for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",b[i][j]);  
}
printf("\n");
}    

printf("multiply of the matrix=\n");    

    add[i][j]=0;
 for (i = 0; i < r; i++){
        for (j = 0; j<c; j++){
  
add[i][j]=a[i][j]+b[i][j];    
  
}    
 }
  
//for printing result    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",add[i][j]);    
}    
printf("\n");    
}    

}  