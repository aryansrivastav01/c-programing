#include<stdio.h>
int main(){
    float distance;
    
    printf("write your distance in kilometer");
    scanf("%f" , &distance);
    distance=distance*1000;
    printf("%fm", distance);
    return 0;
}