#include <stdio.h>
#include <stdlib.h>

int is_prime(int number)
{
	int counter = 0;
	for (int i = 1; i <= number; i++)
	{
    	if((number % i) == 0)
     		counter++;
		if(counter > 2)
		{
			return 0;
			break;
		}
  	}

  	return (counter == 2);
}


int main(int argc, char const *argv[]) {
  	char* reg;
	int prime;
  	int number = strtol(argv[1],&reg, 10);
  	printf("the prime numbers are: \n");
	printf("2\n");

  	for(int i = 1; i <= number ; i+=2)
  	{
    	prime = is_prime(i);
    	if(prime)
      		printf("%i\n", i);
  	}
	
  
  	return 0;
}
