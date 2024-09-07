#include <stdio.h>

void forSquare();
void forRectangle();
int main()
{
      int choice;

      printf("Choose the shape:\n");
      printf("1. Square\n");
      printf("2. Rectangle\n");
      printf("3. Exit\n");
      printf("Enter your choice: ");
      scanf("%d", &choice);

      while (1)
      {
            if (choice == 1)
            {
                  forSquare();
                  break;
            }
            else if (choice == 2)
            {
                  forRectangle();
                  break;
            }
            else if (choice != 1 || choice != 2)
            {
                  printf("Invalid choice!\n");
                  break;
            }
      }

      return 0;
}

void forSquare()
{
      int side, squareArea, squarePerimeter;
      printf("Enter the side of the square: ");
      scanf("%d", &side);

      squareArea = side * side;
      squarePerimeter = 4 * side;

      printf("Area of the square: %d * %d = %d\n", side, side, squareArea);
      printf("Perimeter of the square: 4 * %d = %d\n", side, squarePerimeter);
}

void forRectangle()
{
      int length, breadth;
      printf("Enter the length of the rectangle: ");
      scanf("%d", &length);
      printf("Enter the breadth of the rectangle: ");
      scanf("%d", &breadth);

      int rectangleArea = length * breadth;
      int rectanglePerimeter = 2 * (length + breadth);

      printf("Area of the rectangle %d * %d = %d\n", length, breadth, rectangleArea);
      printf("Perimeter of the rectangle 2 * (%d + %d) = %d\n", length, breadth, rectanglePerimeter);
}