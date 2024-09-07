#include <stdio.h>
#include <string.h>

void main()
{
      char text[30];

      printf("Enter a text: ");
      gets(text);

      printf("You entered: %s\n", text);

      int length = strlen(text);
      printf("Length of the text: %d\n", length);
}