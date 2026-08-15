//2_60.c

#include <stdio.h>

typedef unsigned char* byte_ptr;

unsigned replace_byte (unsigned x, int i, unsigned char b);

int main(void)
{
    unsigned a = 0x12345678;

    printf("BEFORE : %.2x\n", a);
    printf("AFTER  : %.2x\n", replace_byte(a, 2, 0xab));

    return 0;
}

unsigned replace_byte (unsigned x, int i, unsigned char b)
{
    byte_ptr x_ptr = (byte_ptr) &x;
    x_ptr[i] = b;
    return x;
}