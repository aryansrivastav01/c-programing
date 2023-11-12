//7. Write a function to print the characters of a String

#include <stdio.h>

void displayChar(char name[]) {

    int i;

  printf("Output :\n");

  while(name[i]!='\0')

 {

     printf("%c\n",name[i]);

     i++;

 }

}

int main() {

  char name[50];

  printf("Enter the string : ");

  fgets(name, sizeof(name), stdin);

  // Passing string to a function

  displayChar(name);

  return 0;

}