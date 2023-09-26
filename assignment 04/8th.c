#include<stdio.h>
int main(){
    float a;
    printf("your distance in kilometer");
    scanf("%f", &a);
    a=a*1000000;
    printf("%fmm", a);
    return 0;
}