#include <ctype.h>
#include <stdio.h>

int main(int argc, char **argv) {

  FILE *file = fopen("poem.txt", "r");

  //check if file exists
  if (file == NULL) {
    printf("Error: File not found.\n");
    return 1;
  }
  //initialize variables
  char buffer[100];
  int lineCount = 0;
  int charCount = 0;
  int wordCount = 0;

  /*
  Create a program which opens a file specified on the command line and counts:
  - number of lines
  - number of characters
  - number of words
  Before printing them to the user.

  You can do this without storing the file contents in your program.
  You may want to use the isspace() function from the ctype library.

  Ensure that you have appropriate validation.
  */
}