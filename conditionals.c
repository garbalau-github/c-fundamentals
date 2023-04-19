#include <stdio.h>

int main()
{
  // How our program makes decisions? (true or false)
  int age = 18;
  int citizen = 1; // true

  if (age >= 18 && citizen == 1)
  {
    printf("You are eligible to vote!\n");
  }
  else
  {
    printf("You are ineligible to vote!\n");
  }

  // Another example
  int grade = 61;
  char letterGrade;

  if (grade >= 90)
  {
    letterGrade = 'A';
  }
  else if (grade >= 80)
  {
    letterGrade = 'B';
  }
  else if (grade >= 70)
  {
    letterGrade = 'C';
  }
  else if (grade >= 60)
  {
    letterGrade = 'D';
  }
  else
  {
    letterGrade = 'F';
  }

  printf("Based on your grade %d, your mark is %c\n", grade, letterGrade);

  return 0;
}