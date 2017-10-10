#include <stdio.h>
#include <stdbool.h>
int main(int argc, char const *argv[]) {
    int counterarg1 = 0;
    int counterarg2 = 0;
    int pos = 0;
    bool result = true;

    if(argc < 3)
    {
        printf("Not enough arguments\n");
        return 0;
    }

    while(argv[1][pos] != '\0')
    {
        counterarg1++;
        pos++;
    }

    pos = 0;

    while(argv[2][pos] != '\0')
    {
        counterarg2++;
        pos++;
    }

    if(counterarg1 != counterarg2)
    {
        printf("Different strings\n");
        return 0;
    }

    for(int i = 0; i < counterarg2; i++)
    {
        if(argv[1][i] != argv[2][i])
            result = false;
    }

    if(result)
        printf("Strings equal!!!!!\n");
    else
        printf("Strings not equal D:\n");

    return 0;
}
