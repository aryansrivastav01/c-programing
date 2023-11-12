//6. Write a program to find the greatest common divisor (GCD) of two numbers.

#include<stdio.h>
int a,b,c;

void greatest_common_divisior(){
    printf("enter two num");
    scanf("%d %d", &a,&b);

    for(int i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0) c=i;

    }
    printf("%d", c);
}
int main(){
    greatest_common_divisior();
return 0;
}

/*the output of this progam is 
if we enter 34 & 44 then 
the output is 2*/
