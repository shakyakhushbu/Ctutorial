#include<stdio.h>
int main(){
    char ch;
    int x,y;
    printf("Press + for addition\n");
     printf("Press - for addition\n");
      printf("Press * for addition\n");
       printf("Press / for addition\n");

       printf("Enter any choice\n");
       scanf("%c",&ch);

       printf("Enter the value of x and y");
       scanf("%d%d",&x,&y);

       switch(ch)
       {
           case '+':
           
               printf("Addition is:%d\n",(x+y));
               break;
           

           case '-':
           
               printf("Substraction is:%d\n",(x-y));
               break;
           

           case '*':
           
               printf("Multi is:%d\n",(x*y));
               break;
           

           case '/':
           
               printf("Division is:%d\n",(x/y));
               break;
           
           default:
           printf("Entered wrong value");
       }

}