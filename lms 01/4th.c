//4. Write a program to check if a given number is prime or not.

#include<stdio.h>
int a;
int i;
int b=1;
void prime(){
    for( i=2; i<a; i++){
       
        if(a%i==0){
           b=0;
           break;
        }
           
        }
        if(b){
            printf("the number is prime");
        }else{
            printf("the number is not prime");
        }
}

int main(){
    printf("enter a num");
    scanf("%d", &a);
   prime();
return 0;
}

/*the output of program is 
if we enter 7 it will print prime
if we enter 4 it will print not prime*/