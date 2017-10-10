#include <stdio.h>
#include <stdlib.h>
#define FREE(p) do { free(p); (p) = NULL; } while(0)

int main() {
    /*int* p1 = (int*)malloc(8*sizeof(int));
    printf("%p\n", p1);
    printf("%p\n", &p1);
    FREE(p1);

    char* p2 = (char*)malloc(17*sizeof(char));
    printf("%p\n", p2);
    FREE(p2);

    char* p3 = (char*)malloc(25*sizeof(char));
    printf("%p\n", p3);
    FREE(p3);

    char* p4 = (char*)malloc(1024*sizeof(char));
    printf("%p\n", p4);
    FREE(p4);*/

    char* buff1 = malloc(8);
    char* buff2 = malloc(17);
    char* buff3 = malloc(25);
    char* buff4 = malloc(1000);
    char* buff5 = malloc(10);

    printf("buff1 at %p\n", buff1);
    printf("buff2 at %p  (+%p)\n", buff2, (void *)(buff2-buff1));
    printf("buff3 at %p  (+%p)\n", buff3, (void *)(buff3-buff2));
    printf("buff4 at %p  (+%p)\n", buff4, (void *)(buff4-buff3));
    printf("buff2 at %p  (+%p)\n", buff5, (void *)(buff5-buff4));

    free(buff5);
    free(buff4);
    free(buff3);
    free(buff2);
    free(buff1);

    return 0;
}
