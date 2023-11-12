//6. Passing strings to functions

#include <stdio.h>

void displayString(char name[]) {

  printf("Output : ");

  puts(name);

}

int main() {

  char name[50];

  printf("Enter something about yourself : ");

  fgets(name, sizeof(name), stdin);

  // Passing string to a function

  displayString(name);

    return 0;
}

/*the output of the code is 
we print upto 50 words only*/