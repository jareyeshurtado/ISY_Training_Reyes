#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int adding(int first_hour, int second_hour);

int main(int argc, char const *argv[]) {
    assert(argc == 3);

    int hour1 = (int)strtod(argv[1], NULL);
    int hour2 = (int)strtod(argv[2], NULL);
    printf("Result: %d \n",adding(hour1, hour2));

    return 0;
}

int adding(int first_hour, int second_hour)
{
    assert( first_hour >= 0 && first_hour <=23 );
    assert( second_hour >= 0 && second_hour <=23 );

    int result = first_hour + second_hour;
    if(result > 23)
        result -= 24;

    assert( result >= 0 && result <=23 );
    return result;
}
