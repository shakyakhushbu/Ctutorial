#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character\n");
    scanf("%c",&ch);
    if(ch>='a' && ch <='z')
    {
    printf("Enter value is a charaterstics and in lower case");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("Entered value is a characterstics and in upper case");
    }
    else{
        printf("Entered value is not a characterstics");
    }
}