#include<stdio.h>
int main()
{
    int n,i,x,j;
    printf("Enter the Number\n");
    scanf("%d",&n);
    printf("Prime Numbers are: \n");
    for(i=1; i<=n; i++)
    {
        x=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                x++;
        }
        if(x==2)
            printf("%d " ,i);
    }
    
}