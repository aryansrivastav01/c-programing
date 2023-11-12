//1. Write a program that calculates the sum of the first N natural numbers.

#include<stdio.h>
    int a;
    int i;
    int add=0;
    
void sum(){
    scanf("%d", &a);
     
     for( i=1; i<=a; i++){
        add=add+i;
     }
}
int main(){
   printf("enter the num");
   sum();
        printf("%d", add);
return 0;
} 

/*output of the program 
if input is 5 then output will be 15*/
