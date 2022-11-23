#include<stdio.h>
int pal(int);
int main(){
    int num,res,rev,orig;
    printf("Enter any number\n");
    scanf("%d",&num);
    if(pal(num)==1){
        printf("Number is palindrome\n");
    }
    else{
        printf("Number is not palindrome");
    }
    
}
int pal(int x){
    int rev=0,rem,orig;
    orig=x;
    while(x>0){
        rem = x%10;
        rev = (rev*10)+rem;
        x=x/10;
    }
    
    if(orig==rev){
        return 1;
    }
    else{
        return 0;
    }
}
