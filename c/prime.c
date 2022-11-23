#include<stdio.h>
int main()
{
    int i,j,n;
    
    printf("Enter the number till which you want prime numbers\n");
    scanf("%d",&n);
    
    printf("Prime numbers are:-\n");    
    for(i=1;i<=n;i++)
    {
        int x=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                x++;
            }
        }
         
       if(x==1)
        {
            printf("%d ",i);
        }
    
        
    }
}

