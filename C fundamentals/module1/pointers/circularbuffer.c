#include <stdio.h>

#define BUFFER_SIZE 10

/*Global housekeeping variables*/
char buffer[BUFFER_SIZE];
char* begin = buffer;
char* end = buffer + BUFFER_SIZE;
char* write = buffer;
char* read = buffer;
unsigned int fill_count = 0;

unsigned int write(char* buf, int size)
{
    char* start = begin;
    char* finish = end;
}

unsigned int read(int size)
{

}

int main(int argc, char const *argv[]) {
    char* str1 = "123456789";
    char* str2 = "12234567891011121314";


    return 0;
}
