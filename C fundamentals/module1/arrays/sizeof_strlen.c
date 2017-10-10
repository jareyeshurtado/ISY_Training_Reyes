#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    char a[] = "String literal";

    printf("sizeof(a) = %li\n", sizeof(a));
    printf("strlen(a) = %li\n", strlen(a));
    return 0;
}
