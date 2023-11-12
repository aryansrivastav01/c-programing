//3. Read the array from the keyboard. Write a program to input your name using scanf and print it on the screen.

#include<stdio.h>
int main(){
    char name[10];
    printf("enter the name");
   // scanf("%s", &name);
    scanf("%s", name);
    printf("%s\n", name);
    printf("length of character array = %d", strlen(name));
return 0;
}

// output of the code is 
// if the enter the name aryan 
// and length of character array = 5