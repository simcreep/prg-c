#include <stdio.h>

int main(){
    int sum = 0;
    for (int i = 1; i<= 20; i++)
    {
        sum = i + sum;
    }
    printf("%i\n", sum);
}