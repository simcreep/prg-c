#include <stdio.h>

int main() {
    int i;
    printf("Numbers divisible by 5 in between 1 to 50\n");
    i=1;
    while(i<=50)
    {
        if(i % 5 ==0)
        {
            printf("%d\n",i);
        }
        i++;
    }
}