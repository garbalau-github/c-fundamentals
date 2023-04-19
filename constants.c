#include <stdio.h>

#define LENGTH 10
#define WIDTH 25
#define NEWLINE '\n'

int main()
{
  int area = LENGTH * WIDTH;
  printf("The area is %d", area);
  printf("%c", NEWLINE);
  printf("Roses are red %c", NEWLINE);
  printf("Violets are blue %c", NEWLINE);
  return 0;
}