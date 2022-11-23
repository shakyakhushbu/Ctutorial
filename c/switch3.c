#include<stdio.h>
int main(){
    char choice;
    int s,r,l,b;
    float area;
    printf("Enter any choice\n");
    scanf("%c",&choice);
     

    switch(choice){

     case 's':
     
         printf("Enter the value of side\n");
         scanf("%d",&s);
         area = s*s;
         printf("Area of square is:%f",area);
         break;
     
     case 'c':
     
         printf("Enter the value of radius\n");
         scanf("%d",&r);
         area = 3.14*r*r;
         printf("Area of circle is:%f",area);
         break;
     
     case 'r':
     
         printf("Enter the value of lengthn");
         scanf("%d",&l);
         printf("Enter the value of breadth\n");
         scanf("%d",&b);
         area=l*b;
         printf("Area of square is:%f",area);
         break;
     
     default:
     
         printf("Entereed wrong choice\n");
     
    }
     
    }