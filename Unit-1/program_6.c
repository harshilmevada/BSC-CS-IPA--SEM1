#include <stdio.h>

int main()
{
      int number;

      printf("Enter an integer: ");
      scanf("%d", &number);

      //     In Octal Num 0 to 7 = 8 digit
      printf("Octal representation: %o\n", number);
      
      //     In Hexa Num 0 to 9 and A to F = 16 digit
      printf("Hexadecimal representation: %x\n", number);

      // if number = 1 to 7 than Octal and Hexa = same 7
      // if number = greater than 7 than Ithis program give diffent value

      return 0;
}