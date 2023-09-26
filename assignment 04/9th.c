#include<stdio.h>
int main(){
    int height;
    printf("enter the height of student in feet");
    scanf("%d", &height);
    height= height*12;
    printf("%d", height);
    return 0;
}