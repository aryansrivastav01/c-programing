#include<stdio.h>
int main(){
    int  num;
    printf("enter a number");
    scanf("%d",&num);
    if(num%2==0){
        printf("the number is even\n");
        printf("it is divisible by 2\n");
        if(num%3==0){
            printf("it is divisible by 3\n");
        }
    }else {
        printf("the number is odd\n");
        if(num%5==0){
            printf("the number is disible by 5");
        }
    }
return 0;
}