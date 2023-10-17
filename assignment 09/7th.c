#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value of sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a!=b&&b!=c&&c!=a){
        printf("the triangle is scalane");
    }else if(a==b&&b==c){
        printf("the triangle is equitorial");
    }else if(a==b||b==c||c==a){
        printf("the triangle is issoceles");
    }
return 0;
}