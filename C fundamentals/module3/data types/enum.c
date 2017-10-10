#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


typedef enum
{
    COLOR_RED = 1,
    COLOR_GREEN,
    COLOR_BLUE,
    COLOR_MAX
} COLOR;

char* COLOR_to_text(COLOR color);

int main(int argc, char const *argv[]) {
    COLOR my_color;
    char* color_to_print;
    assert(argc == 2);
    my_color = strtod(argv[1],NULL);
    color_to_print = COLOR_to_text(my_color);
    printf("The color selected is: %s\n", color_to_print);


    return 0;
}

char* COLOR_to_text(COLOR color)
{
    assert(color < COLOR_MAX);

    if(color == COLOR_RED)
        return "red";
    else if (color == COLOR_GREEN)
        return "green";
    else if( color == COLOR_BLUE)
        return "blue";
    else
        return "Invalid color";
}
