#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void c2k(double value);
void c2f(double value);
void f2k(double value);
void f2c(double value);
void k2c(double value);
void k2f(double value);

int main(int argc, char *argv[]) {


    if(argc != 3)
        printf("Too few or many arguments\n");
    else
    {
        char* conv = argv[1];
        double value = strtod(argv[2], NULL);

        if(strcmp(conv, "c2k") == 0)
            c2k(value);
        else if(strcmp(conv, "c2f") == 0)
            c2f(value);
        else if(strcmp(conv, "f2k") == 0)
            f2k(value);
        else if(strcmp(conv, "f2c") == 0)
            f2c(value);
        else if(strcmp(conv, "k2c") == 0)
            k2c(value);
        else if(strcmp(conv, "k2f") == 0)
            k2f(value);
        else
            printf("Unrecognized argument\n");
    }

    return 0;
}

void c2k(double value)
{
    double result = value + 273.15;
    printf("%fºC are %fºK\n", value, result);
}

void c2f(double value)
{
    double result = value * 1.8 + 32;
    printf("%fºC are %fºF\n", value, result);
}

void f2k(double value)
{
    double result = ((value - 32) * 5 / 9) + 273.15;
    printf("%fºF are %fºK\n", value, result);
}

void f2c(double value)
{
    double result = (value - 32) * 5 / 9;
    printf("%fºF are %fºC\n", value, result);
}

void k2c(double value)
{
    double result = (value - 273.15);
    printf("%fºK are %fºC\n", value, result);
}

void k2f(double value)
{
    double result = ((value - 273.15) * 1.8) + 32;
    printf("%fºK are %fºF\n", value, result);
}
