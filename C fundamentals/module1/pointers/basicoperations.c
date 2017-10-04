#include <stdio.h>

int main(int argc, char const *argv[]) {
    /*Variables*/
    int a = 0;
    char b = 100;
    short int c = 0;
    unsigned int d = 0;

    /*Pointers*/
    int* pa = &a;
    char* pb = &b;
    short int* pc = &c;
    unsigned int* pd = &d;

    /*printing addresses*/
    printf("address: %p value: %i\naddress: %p value: %c\naddress: %p value: %hi\naddress: %p value: %u\n\n\n", &pa,*pa,&pb,*pb,&pc,*pc,&pd,*pd);
	/*changing values with pointer*/
	*pa = 10;
	*pb = 105;
	*pc = 10;
	*pd = 10;
	printf("address: %p value: %i\naddress: %p value: %c\naddress: %p value: %hi\naddress: %p value: %u\n", &pa,*pa,&pb,*pb,&pc,*pc,&pd,*pd);
    return 0;
}
