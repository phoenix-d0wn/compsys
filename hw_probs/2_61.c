// 2_61.c

#include <stdio.h>

#define PRINT_INT(x)       printf(#x" = %d\n", x)

int any_bit_one(int x);
int any_bit_zero(int x);
int any_lsb_one(int x);
int any_msb_zero(int x);

int main(void)
{
    int x = 3, y = 0;

    PRINT_INT(any_bit_one(3));
    PRINT_INT(any_bit_one(0));
    PRINT_INT(any_bit_zero(3));
    PRINT_INT(any_bit_zero(0));
    PRINT_INT(any_bit_zero(-1));
    PRINT_INT(any_lsb_one(3));
    PRINT_INT(any_lsb_one(0));
    PRINT_INT(any_msb_zero(3));
    PRINT_INT(any_msb_zero(0));
    PRINT_INT(any_msb_zero(-1));

    //test
    // char n = 0xf5;
    // printf("%.2x\n", (int) n);

    return 0;
}

int any_bit_one(int x)
{
    return x != 0;
}

int any_bit_zero(int x)
{
    return x != -1;
}

int any_lsb_one(int x)
{
    return any_bit_one((char) x);
}

int any_msb_zero(int x)
{
    return any_bit_zero(x >> (sizeof(int) - 1));
}