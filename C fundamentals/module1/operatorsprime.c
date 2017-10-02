#include <stdio.h>

int is_prime(int number)
{
  int counter = 0;
  for (int i = 1; i <= number; i++)
  {
    if((number % i) == 0)
    {
      counter++;
    }
  }

  if(counter == 2)
    return 1;
  else
    return 0;
}
int main(int argc, char const *argv[]) {
  int* reg;
  int number = strtol(argv[1],reg, 10);
  printf("the prime numbers are: \n");
  for(int i = 2; i <= number ; i++)
  {
    int prime = is_prime(i);
    if(prime)
      printf("%i\n", i);
  }
  
  return 0;
}
