#include<stdio.h>
int main(){
    int choice,x,y;
    do{
    printf("Entrer 1 for Addition\n");
    printf("Entrer 2 for Substraction\n");
    printf("Entrer 3 for Multiplication\n");
    printf("Entrer 4 for Division\n");
    printf("Entrer 5 for Modulus\n");

    printf("Enter your choice\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        {
            printf("Enter the value for x and y\n");
            scanf("%d%d",&x,&y);
            printf("Asddition is:%d\n",(x+y));
            
        }
break;
        case 2:
        {
            printf("Enter the value for x and y\n");
            scanf("%d%d",&x,&y);
            printf("Substraction is:%d\n",(x-y));
             
        }
break;
         case 3:
        {
            printf("Enter the value for x and y\n");
            scanf("%d%d",&x,&y);
            printf("Multiplication is:%d\n",(x*y));
             
        }
        break;

         case 4:
        {
            printf("Enter the value for x and y\n");
            scanf("%d%d",&x,&y);
            printf("Division is:%d\n",(x/y));
            
        }
        break;

         case 5:
        {
            printf("Enter the value for x and y\n");
            scanf("%d%d",&x,&y);
            printf("Modulus is:%d\n",(x%y));
             
        }
        break;
        default:
        {
            printf("Wrong value entered");
            break;
        }
         

        


    }
  

    

    
    }
      while(1);
}