#include <stdio.h>

int main()
{

  // Declare variables
  int x, y;
  float z;

  // Initializing
  x = 25;
  y = 37;
  z = 42.15f;

  // Arithmetic Operators
  printf("x -> %d | y -> %d\n", x, y);
  printf("x + y = %d\n", (x + y));
  printf("x - y = %d\n", (x - y));
  printf("x * y = %d\n", (x * y));

  // Casting result as a double
  double result = (double)x / y;
  printf("x / y = %f\n", result);

  // Incrementing
  x++;
  x++;
  printf("x is %d\n", x);

  // Decrementing
  y--;
  y--;
  printf("y is %d\n", y);

  // Remainder after division
  int modResult = 9 % 2; // 2 goes into 4 four times, and 1 is remainder
  printf("modResult is %d\n", modResult);

  return 0;
}