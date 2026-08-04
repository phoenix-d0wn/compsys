//bit_shift.c

#include <stdio.h>

typedef unsigned char* byte_ptr;

void show_bytes(byte_ptr start, int len);
void show_int(int x);
void show_char(char x);

int main(void)
{
    char a = 0xd4;

    printf("a\n");
    printf("====\n");
    show_char(a);

    char b = (a << 2);
    printf("\n");
    printf("a << 2\n");
    printf("====\n");
    show_char(b);

    b = ((unsigned char) a >> 3);
    printf("\n");
    printf("a >> 3\n");
    printf("====\n");
    show_char(b);

    return 0;
}


void show_bytes(byte_ptr start, int len)
{
    int i;
    printf("(BIN)\t");
    for (i = len-1; i >= 0; i--)
        printf(" %.8b", start[i]);
    printf("\n");

    printf("(HEX)\t");
    for (i = len-1; i >= 0; i--)
        printf(" %8.2x", start[i]);
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_ptr) &x, sizeof(int));
}

void show_char(char x)
{
    show_bytes((byte_ptr) &x, sizeof(char));
}