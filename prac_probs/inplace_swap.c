//inplace_swap.c\

#include <stdio.h>

void inplace_swap(int *x, int*y);
void test_inplace_swap(int *x, int *y);
void test_reverse_array(int arr[], int cnt);

int main(void)
{
//     int x = 5;
//     int y = 8;

    // test_inplace_swap(&x, &y);
    
    int arr[] = {1,2,3,4,5};
    test_reverse_array(arr, (sizeof(arr) / sizeof(arr[0])));

    return 0;
}

void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void test_inplace_swap(int *x, int *y)
{
    printf("Before:\tx=%d, y=%d\n", *x, *y);
    inplace_swap(x, y);
    printf("After:\tx=%d, y=%d\n", *x, *y);
}

void reverse_array(int arr[], int cnt)
{
    int i, first, last;

    for (first = 0, last = cnt - 1;
        first < last;
        first++, last--) {
        inplace_swap(&arr[first], &arr[last]);
    }
}

void test_reverse_array(int arr[], int cnt)
{
    int i;

    printf("Before:\t");
    for (i = 0; i < cnt; i++)
        printf(" %d", arr[i]);
    printf("\n");

    reverse_array(arr, cnt);

    printf("After:\t");
    for (i = 0; i < cnt; i++)
        printf(" %d", arr[i]);
    printf("\n");
}
