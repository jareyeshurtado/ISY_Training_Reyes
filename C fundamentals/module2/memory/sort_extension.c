#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

#define FREE(p) do { free(p); (p) = NULL; } while(0)

/*Functions declarations*/
void printBuffer(const int* a, int size);
int cmpfunc (const void * a, const void * b);
int cmpfunc2 (const void * a, const void * b);


int main(int argc, char *argv[]) {
	int opt;
    int numbers = 0;
	bool reverse = false;
	
	//ask user for numbers to insert
    printf("How many numbers do you want to sort?: ");
    scanf("%d", &numbers);
	
	//Memory allocation
    int* ptr = calloc(numbers, sizeof(int));
    printf("Memory callocated\n");
    printBuffer(ptr, numbers);

	//ask user to fill the buffer
    for(int i = 0; i < numbers; i++)
    {
        printf("#%i: ", (i+1));
        scanf("%d", (ptr + i));
    }
    printf("Memory filled by user\n");
    printBuffer(ptr, numbers);

    //Get the -r flag
	while ((opt = getopt (argc, argv, "r")) != -1)
  	{
		switch (opt)
		{
	  	case 'r':
			reverse = true;
		break;
		}
	}

	//Sort
	if(reverse)
		qsort(ptr, numbers, sizeof(int), cmpfunc2);
	else
		qsort(ptr, numbers, sizeof(int), cmpfunc);
	
	//print final buffer
    printf("Memory after sort\n");
    printBuffer(ptr, numbers);

	//Free the allocated memory
    FREE(ptr);
    return 0;
}


//Functions
void printBuffer(const int* a, int size)
{
	for(int i = 0; i < size; i++)
    {
        printf("%d\t", *(a+i));
    }
    printf("\n");
}

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int cmpfunc2 (const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}

