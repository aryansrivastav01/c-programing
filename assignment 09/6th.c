#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>=c&&a+c>=c&&c+b>=a){
        printf("the triangle is valid");
    }else{
        printf("the triangle is not valid");
}
return 0;
}