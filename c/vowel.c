#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character\n");
    scanf("%c",&ch);
    if (ch=='a' || ch=='b' || ch=='c' || ch == 'd' || ch == 'e' || ch=='A' || ch=='B' || ch=='C' || ch=='D' || ch=='E') 
    {
        printf("Entered value is vowel");
    }
    else{
        printf("Entered value is not vowel");
    }
}