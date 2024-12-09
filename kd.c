#include <stdio.h>

int main()
{
    int a = 5, b = 10;

    a = a + b;
    printf("the value ofa:%d\n", a);
    b = a - b;
    printf("the value ofb:%d\n", b);
    a = a - b;
    printf("the value ofa:%d\n", a);

    printf("a = %d, b = %d\n", a, b);
    return 0;
}