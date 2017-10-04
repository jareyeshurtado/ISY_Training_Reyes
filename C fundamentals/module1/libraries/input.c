#include <stdio.h>
#include <limits.h>
#define NUMBERS_TO_INSERT 10
#define START 1

int main() {

	int number = INT_MIN;
	int max_number = INT_MIN;

	printf("Write 10 numbers:\nAt the end I will give you the max number you inserted\n");


	for (int i = START; i <= NUMBERS_TO_INSERT; i++)
	{
    	printf("Number #%d:", i);
    	scanf("%d", &number);
    	if(number > max_number)
      		max_number = number;
  	}
  	printf("The max number is: %d\n", max_number);
  	return 0;
}
