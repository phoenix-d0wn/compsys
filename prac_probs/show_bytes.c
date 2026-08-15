//show_bytes.c

#include <stdio.h>

typedef unsigned char* byte_ptr;

void show_bytes(byte_ptr start, size_t len);
void show_int(int x);
void show_short(short x);
void show_float(float x);
void show_ptr(void *x);

void test_show_bytes(int val);

int main(void)
{
    test_show_bytes(0x01234567);

    return 0;
}

void show_bytes(byte_ptr start, size_t len)
{
    int i;

    printf("0x");
    for (i = 0; i< len; i++) 
        printf(" %.2x", start[i]);
    printf("\n");
}

void show_long(long x)
{
    show_bytes((byte_ptr) &x, sizeof(long));
}

void show_int(int x)
{
    show_bytes((byte_ptr) &x, sizeof(int));
}

void show_float(float x)
{
    show_bytes((byte_ptr) &x, sizeof(int));
}

void show_short(short x)
{
    show_bytes((byte_ptr) &x, sizeof(short));
}

void show_ptr(void *x)
{
    show_bytes((byte_ptr) &x, sizeof(void *));
}

void show_int64t(__int64_t x)
{
    show_bytes((byte_ptr) &x, sizeof(__int64_t));
}

void test_show_bytes(int val)
{
    int i_val       = val;
    long l_val      = (long) val;
    float f_val     = (float) val;
    float *p_fval   = &f_val;
    int *p_ival     = &i_val;
    

    // printf("Show bytes\n");
    show_int(i_val);
    show_long(l_val);
    show_float(f_val);
    show_int64t(i_val);
    show_ptr(p_ival);
    show_ptr(p_fval);
}