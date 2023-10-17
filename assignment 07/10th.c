#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter first side of triangle");
    scanf("%d",&a);
    printf("enter second side of triangle");
    scanf("%d", &b);
    printf("enter third side of triangle");
    scanf("%d",&c);
    if(a+b>=c){
        printf("it is a valid triangle");
    }else{
        printf("its not a valid triangle");
    }
return 0;
}