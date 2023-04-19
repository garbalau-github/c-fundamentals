#include <stdio.h>

// Declarations
void greet();
void multiply(int x, int y);
void square(int z);
float battingAverage(int atBats, int hits, int walks);

int main()
{
  greet();
  greet();
  greet();
  multiply(5, 5);
  multiply(100, 5);
  square(2);
  square(4);

  // Function with return
  float ba = battingAverage(450, 99, 35);
  printf("Batting Average is %f\n", ba);
  return 0;
}

// Implementations
void greet()
{
  printf("Greetings!\n");
}

void multiply(int x, int y)
{
  int result = x * y;
  printf("The result is %d\n", result);
}

void square(int z)
{
  int result = z * z;
  printf("The square of %d is %d\n", z, result);
}

float battingAverage(int atBats, int hits, int walks)
{
  float battingAverage;
  // Casting
  battingAverage = (float)hits / (atBats - walks);
  return battingAverage;
}