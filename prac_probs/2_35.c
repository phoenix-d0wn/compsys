//2_35.c

#include <stdio.h>

#define MAX_INT     2147483647
#define MIN_INT     -2147483648

int tmult_ok(int x, int y);

int main(void)
{
    int a = MAX_INT, b = 1;
    
    printf("a * b is overflow ? : %s", tmult_ok(a, b) ? "False" : "True");

    return 0;
}

int tmult_ok(int x, int y)
{
    __int64_t p = (__int64_t) x * y;

    return p == (int) p;
}