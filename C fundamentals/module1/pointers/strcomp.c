#include <stdio.h>

unsigned int strcomp(char* str1, char* str2)
{
    char* pstr1 = str1;
    char* pstr2 = str2;

    while(*pstr1 != '\0' && *pstr2 != '\0')
    {
        if(*pstr1 != *pstr2)
            return 0;
        pstr1++;
        pstr2++;
    }
    return *pstr1 == *pstr2;
}

int main(int argc, char const *argv[]) {
    char a[] = "Hellos";
    char b[] = "Hellos";
    unsigned int result = 0;
    result = strcomp(a,b);
    if(result)
        printf("Strings are equal\n");
    else
        printf("strings are not equal\n");

    return 0;
}
