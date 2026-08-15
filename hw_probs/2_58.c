//2_58.c

#include <stdio.h>

typedef unsigned char* byte_ptr;

int is_little_endian(void);

int main(void)
{
    printf("Is little endian ? : %s", is_little_endian() ? "Yes" : "No");

    return 0;
}

int is_little_endian(void)
{
    byte_ptr start;

    int x = 1;

    start = (byte_ptr) &x;

    return start[0] == 1;
}
