#include "stdio.h"

/**
 * @brief  ��������
 * @param a
 * @param b
 */
void swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
/**
 * @brief ��������ں���
 * @return int
 */
int main()
{
  int a = 10, b = 11;
  swap(&a, &b);
  printf("a = %d\r\nb = %d\r\n", a, b);
}
