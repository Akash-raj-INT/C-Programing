//write a program to ask the user to enter the name, city and state and the diplay to the user using unformated function.

#include <stdio.h>

int main() {
   char name[50], city[50], state[50];
   puts("Enter your name: ");
   gets(name);
   puts("Enter your city: ");
   gets(city);
   puts("Enter your state: ");
   gets(state);

   printf("My name is %s, I live in %s, %s.\n", name, city, state);

   return 0;
}
