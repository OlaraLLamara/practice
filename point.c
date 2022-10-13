#include <stdio.h>
#include <cs50.h>

int main(void) {
  const int MINE =2;
  int points = get_int("how many points did you lose this semester?");

  if(points<MINE)
  {
    printf("you lost fewer pints\n");
  }

  else if (points > MINE)
    {
    printf("you lost more points\n");
    }
  else {
    printf("you got the same points\n");
    }
}


