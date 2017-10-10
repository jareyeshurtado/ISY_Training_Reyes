#include <stdio.h>

void f(const char * a)
{
    printf("sizeof(a) = %li\n", sizeof(a));
}

void f2(const char * a)
{
    printf("sizeof(a) = %li\n", sizeof(a));
}

int main(int argc, char const *argv[]) {
    char a[] = "size of used in arrays";
    int b[] = {1,2,3};
    printf("sizeof(a) = %li\n", sizeof(a));
    printf("sizeof(a) = %li\n", sizeof(b));
    f(a);
    f2(a);
    return 0;
}
