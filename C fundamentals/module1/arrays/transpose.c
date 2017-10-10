#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    int A[3][3];
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for(int j = 0; j < 3; j++)
        {
            A[i][j] = rand() % 11;
            printf("%d\t", A[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for(int j = 0; j < 3; j++)
        {
            printf("%d\t", A[j][i]);
        }
    }
    printf("\n");

    return 0;
}
