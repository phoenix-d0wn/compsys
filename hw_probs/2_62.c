//2_62.c

#include <stdio.h>

int int_shifts_are_arithmetic(void);

int main(void)
{   

    printf("int shifts are arithmetic ? : %d\n", int_shifts_are_arithmetic());


    return 0;
}

int int_shifts_are_arithmetic(void)
{
    unsigned x = 16;
    unsigned n = (int) x >> 2;
    printf("%.2x\n", n);
    return (x >> 2) < 0;
}