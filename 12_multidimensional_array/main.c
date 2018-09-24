#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int matrix[5][4];
    int i, j;

    for ( i = 0; i < 5; i++ ) {
        for( j = 0; j < 4; j++ ) {
            scanf("%i", &matrix[i][j]);
        }
    }

    for ( i = 0; i < 5; i++ ) {
        for( j = 0; j < 4; j++ ) {
            printf("%i ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
