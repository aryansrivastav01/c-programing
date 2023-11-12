// 2. Write a C program to calculate the factorial of a given number.

#include<stdio.h>
int a;
int b=1;
void factorial(){
  printf("enter a num");
  scanf("%d", &a);
  for(int i=1; i<=a; i++){
     b=b*i;
  }
}
int main(){
  factorial();
  printf("%d", b);
return 0;
} 

/*the output of this program is 
if we enter the number 5 then output will be 120*/