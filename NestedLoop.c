#include <stdio.h>

int main()
{
    int i, j;
    int sum;
    for( i = 1; i < 11; i++ ) {
        j = 1;
        sum = 0;
        do {
            sum += j++;
        } while ( j <= i);
        printf("%d\t\t%d\n", i, sum);
    }
    return 0;
}