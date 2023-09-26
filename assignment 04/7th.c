#include<stdio.h>
int main(){
    float a;
    printf("your distance in kilometer");
    scanf("%f", &a);
    a=a*100000;
    printf("%fcm", a);
    return 0;
}