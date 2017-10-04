#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	printf("%s\n",getenv("HOME"));
	printf("%s\n",getenv("USER"));
	printf("%s\n",getenv("PATH"));
	return 0;
}
