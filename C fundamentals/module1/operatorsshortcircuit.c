#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int result= zero() && one();
  printf("%i", result);
  return 0;
}

int one()
{
  printf("number one\n");
  return 1;
}

int zero()
{
  printf("zero\n");
  return 0;
}
