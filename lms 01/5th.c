//5. Write a C program to generate the first N terms of the Fibonacci series.

#include<stdio.h>
int a,b,c,d;

void fibonacci(){
    printf("enter the num");
    scanf("%d",&a);
     b=1;
     c=0;
     d=0;
     printf("%d ",c);

     for(int i=1; i<=a/2; i++){
        c=d;
        d=c+b;
        printf("%d ", d);
        b=d;
        d=c+b;
        printf("%d ",d);

     }

}
int main(){
    fibonacci(a);
return 0;
}

/*output of the program is 
if we enter 5 then 
output is 0 1 1 2 3 */