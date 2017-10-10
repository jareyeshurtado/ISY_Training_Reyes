#include <stdio.h>
#include <string.h>

unsigned int my_strlen(char* str)
{
	unsigned int counter;
	char* pstr = str;
	while(*pstr != '\0')
	{
		pstr++;
		counter++;
	}
	return counter;
}

int main () {
	char str_to_test[] = "hello world how are you??";
	unsigned int result = 0;
	unsigned int my_result = 0;
	result = strlen(str_to_test);
	my_result = my_strlen(str_to_test);
	printf("result with strlen: %u\n", result);
	printf("result with my_strlen: %u\n", my_result);
    return(0);
}

