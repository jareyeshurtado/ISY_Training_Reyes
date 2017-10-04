#include <stdio.h>

int main(int argc, char const *argv[]) {
    
	/*Variables*/
    int a[3] = {1,2,3};
    char b[3] = {100, 101, 102};
    short int c[3] = {1,2,3};
    unsigned int d[3] = {1,2,3};

    /*Pointers*/
    int* pa = &a[0];
    char* pb = &b[0];
    short int* pc = &c[0];
    unsigned int* pd = &d[0];
	/*Print value of element in the pointer array*/
	printf("Value of position 1 in the array char is %c\n", *(pb+1));

	/*print address over the array */
	for (int i = 0; i < 3; i++)
	{
		printf("address: %p value: %i\n", pa, *pa);
		pa++;
	}

	for (int i = 0; i < 3; i++)
	{
		printf("address: %p value: %c\n", pb, *pb);
		pb++;
	}

	for (int i = 0; i < 3; i++)
	{
		printf("address: %p value: %hi\n", pc, *pc);
		pc++;
	}

	for (int i = 0; i < 3; i++)
	{
		printf("address: %p value: %u\n", pd, *pd);
		pd++;
	}


    return 0;
}
