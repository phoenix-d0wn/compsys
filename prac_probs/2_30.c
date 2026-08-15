//2_30.c

#include <stdio.h>
// #include <limits.h>

#define MAX_INT     2147483647
#define MIN_INT     -2147483648

int tadd_ok(int x, int y);

int main(void)
{
    int a = MIN_INT, b = 0;

    printf("a + b is overflow ? : %s", tadd_ok(a, b) ? "False" : "True");

    return 0;
}

//determine whether arguments can be added w/out overflow
int tadd_ok(int x, int y)
{
    int pos_over = (x > 0) && (y > 0) && (x + y < 0),
        neg_over = (x < 0) && (y < 0) && (x + y >= 0);

    return !(pos_over || neg_over);
}