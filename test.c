#include "stdio.h"

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10, b = 11;
    swap(&a, &b);
    printf("a = %d\r\nb = %d\r\n", a, b);
}