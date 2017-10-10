#include <stdio.h>

int main(int argc, char *argv[]) {
    int counter=0;
    char* p;
    for (int i = 0; i < argc; i++) {
        p = argv[i];
		while(*p != '\0')
		{
			p++;
			counter++;
		}
	printf("Length of %i element: %i\n", i, counter);
	counter=0;
    }
    return 0;
}
