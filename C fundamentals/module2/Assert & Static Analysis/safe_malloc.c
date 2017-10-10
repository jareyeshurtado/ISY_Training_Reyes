#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

void* safe_malloc(long int size);

int main(int argc, char const *argv[]) {
    char* ptr = safe_malloc(999999999999);
    free(ptr);
    return 0;
}

void* safe_malloc(long int size)
{
    void* ptr = malloc(size);

    assert(ptr != NULL);

    return ptr;
}
