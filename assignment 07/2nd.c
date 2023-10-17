#include<stdio.h>
int main(){
    float a;
    float b;
    float c;
    float sum,multiply,divide,diffrence,nothing;
    printf("enter the value of first variable");
    scanf("%f", &a);
    printf("enter the value of first varibale");
    scanf("%f",&b);
    printf("enter the value of opration you want to perform");
    scanf("%f",&c);
    if(c==1){
        sum=a+b;
        printf("%f", sum);
    }else if(c==2){
        diffrence=a-b;
        printf("%f", diffrence);
    }else if(c==3){
        multiply=a*b;
        printf("%f", multiply);
    }else if(c==4){
        divide=a/b;
        printf("%f",divide);
    }else if(c==5){
        printf("no opration did"); 

    }
    
return 0;
}