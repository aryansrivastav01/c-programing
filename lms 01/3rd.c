//3. Write a program to reverse a given number (e.g., 12345 becomes 54321).

#include<stdio.h>
int a,c;

void reverse(){

       int b=0;
      printf("enter the num");
      scanf("%d", &a);
      
    while(a!=0){
        c=a%10;
        b=b*10+c;
        a=a/10;
        
    }
     printf("%d", b);
}
int main(){
    reverse(a);
return 0;
}

/*output of the program is 
if we enter 12345 the
 the output will be 54321*/