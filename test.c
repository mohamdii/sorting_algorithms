#include <stdio.h>

int main(void)
{
    int **x, z;
    int *y;
    x = &y;
    *x = y;
    z = 10;
    y = &z;
    printf("%p\n%p\n%p\n%p\n%p\n", x, *x, y, &y, &z);

    return 1;
}