#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter the first value ");
    scanf("%d",&a);
    printf("enter the second value ");
    scanf("%d",&b);
    printf("enter the third value ");
    scanf("%d",&c);
    if(a>b&&c){
        printf("%d",a);
    }else if(b>a&c){
        printf("%d", b);
    }else if(c>a&b){
        printf("%d", c);
    }else {
        printf(" ");
    }
    return 0;
}