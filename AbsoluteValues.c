#include <stdio.h>
#include <math.h>

int main(){
    int sum = 0;
    for(int i = -128; i <= 128; i++)
    {
        sum = abs(i) + sum;
    }
    printf("%i\n", sum);
    return 0;
}