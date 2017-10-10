#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FREE(p) do { free(p); (p) = NULL; } while(0)

void to_Pig_Latin (char* str, int size);
int find_vocal(char* str, int size);
void conv(char* str, int size, int pos);

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; ++i)
    {
            to_Pig_Latin(argv[i], strlen(argv[i]));
    }
    printf("\n");

    return 0;
}


void to_Pig_Latin (char* str, int size)
{
    int pos = 0;

    pos = find_vocal(str, size);

    if(pos == 0)
        printf("%sway ", str);
    else
        conv(str, size, pos);
}

int find_vocal(char* str, int size)
{
    for(int i = 0; i < size; ++i)
    {
        if(*(str+i) == 'a' || *(str+i) == 'e' || *(str+i) == 'i' || *(str+i) == 'o' || *(str+i) == 'u' || *(str+i) == 'A' || *(str+i) == 'E' || *(str+i) == 'I' || *(str+i) == 'O' || *(str+i) == 'U')
            return i;
    }
}

void conv(char* str, int size, int pos)
{
    char* ptr = calloc((size + 1), sizeof(char));
    char* ptr2 = ptr;
    for (int i = pos; i < size; ++i)
    {
        *ptr2 = *(str + i);
        ptr2++;
    }
    for(int i = 0; i < pos; ++i)
    {
        *ptr2 = *(str + i);
        ptr2++;
    }
    printf("%say ", ptr);
    FREE(ptr);
}
