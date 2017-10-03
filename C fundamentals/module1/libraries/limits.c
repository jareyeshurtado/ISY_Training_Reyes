#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[]) {
  printf("%d\n", CHAR_BIT);
  printf("%lu\n", ULONG_MAX);
  printf("%ld\n", LONG_MIN);
  printf("%ld\n", LONG_MAX);
  printf("%d\n", INT_MIN);
  printf("%d\n", INT_MAX);
  printf("%u\n", UINT_MAX);
  printf("%d\n", USHRT_MAX);
  printf("%d\n", CHAR_MAX);
  printf("%d\n", UCHAR_MAX);
  return 0;
}
