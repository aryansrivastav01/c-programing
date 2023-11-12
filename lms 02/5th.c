//5. Use fgets() & puts() functions to read and print a line of Text

#include <stdio.h>

int main() {

  char name[10];

  printf("Enter your name: ");

  fgets(name, sizeof(name), stdin);  // read string

  printf("Hello ");

  puts(name);  // display string

  return 0;

}

/*the output of the code is 
case 1:- if we enter Thrusdayyy then output is hello thrusdayy
case 2:- if we enter Today is Thrusday then output is hello today is */