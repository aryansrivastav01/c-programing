//4. Read the array from the keyboard. Write a program to input your name using gets and print it on the screen.

#include <stdio.h>

int main() {

  char name[10];

  printf("Enter your name : ");
  printf("\n");

  gets(name);

  printf("Your name is %s \n", name);

  puts(name);

  return 0;
}

/*the output of the code is
if we enter our full name :- aryan srivastav
then it print aryan srivastav. aryan srivastav*/
