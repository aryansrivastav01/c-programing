//7. Write a C program to check if a given number is a palindrome or not.

#include<stdio.h>
int a,b,c,d;

void palindrome(){
    printf("enter the num");
    scanf("%d", &a);
    d=a;
    b=0;
     while(a!=0){
        c=a%10;
        b=b*10+c;
        a=a/10;
     }
     if(b==d) printf("the number is palindrome");
     else printf("the number is not palindrome");
    
}
int main(){
    palindrome(a);
return 0;
}

/*the output of the program is 
if we enter 54321234 then
the out is the number is palindrome*/