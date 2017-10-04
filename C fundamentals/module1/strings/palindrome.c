#include <stdio.h>
#include <string.h>
#define START 0



int main(int argc, char const *argv[]) {
  	const int to_lower_case = 'a' - 'A';
  	char a[] = "SOc";
  	int size = strlen(a);
  	char b[size];
	int result;	

  	for(int i = START; i < size; i++)
  	{
    	if(a[(size-1)-i] >= 'A' && a[(size-1)-i] <= 'Z')
      		a[(size-1)-i] += to_lower_case;

    	b[i] = a[(size-1)-i];
  	}

  	b[size] = '\0';
  	if(strcmp(a,b))
    	printf("The string is not palindrome :(\n");
  	else
    	printf("The string is a palindrome!!!!\n");
  	return 0;
}
