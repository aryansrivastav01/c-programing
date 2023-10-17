#include<stdio.h>
int main(){
    int a,b;
    a=4;
    b=5;

    for(int i=1; i<=a; i++){
        for( int j=1; j<=b; j++){
            printf("*");
        }
        printf("\n");
    }
return 0;
}