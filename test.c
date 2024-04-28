#include "stdio.h"

/**
 * @brief  交换函数
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
 * @brief 主函数入口函数
 * @return int
 */
int main()
{
  int a = 10, b = 11;
  swap(&a, &b);
  printf("a = %d\r\nb = %d\r\n", a, b);
}
