#include <stdio.h>
#include <stdlib.h>
#define FREE(p) do { free(p); (p) = NULL; } while(0)

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


int main(int argc, char const *argv[]) {
    int numbers = 0;
    int actual = 0;
    printf("How many numbers do you want to sort?: ");
    scanf("%d", &numbers);
    int* ptr = calloc(numbers, sizeof(int));

    printf("Memory callocated\n");
    for(int i = 0; i < numbers; i++)
    {
        printf("%d\t", *(ptr+i));
    }
    printf("\n");

    for(int i = 0; i < numbers; i++)
    {
        printf("#%i: ", (i+1));
        scanf("%d", &actual);
        *(ptr + i) = actual;
    }

    printf("Memory filled by user\n");
    for(int i = 0; i < numbers; i++)
    {
        printf("%d\t", *(ptr+i));
    }
    printf("\n");

    qsort(ptr, numbers, sizeof(int), cmpfunc);

    printf("Memory after sort\n");
    for(int i = 0; i < numbers; i++)
    {
        printf("%d\t", *(ptr+i));
    }
    printf("\n");

    FREE(ptr);
    return 0;
}
