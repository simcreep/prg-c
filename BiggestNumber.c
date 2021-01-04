#include <stdio.h>

int nej(int a, int b, int c)
{
    int vysl;
    if (a>b)
    {
        if (a>c)
        vysl = a;
        else
        vysl = c;
    }
    else
    {
        if (b>c)
        vysl = b;
        else
        vysl = c;
    }
    return (vysl);
}

int main()
{
    int a;
    int b;
    int c;
    printf("This program evaluates the highest number of these three numbers..\n");
    printf("38:");
    scanf("%d, &a");
    printf("45:");
    scanf("%d, &b");
    printf("40:");
    scanf("%d, &c");
    printf("The biggest number is: %d\n", nej(a,b,c));
    return 0;
}