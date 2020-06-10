/*
 * @Description: 
 * @Author: 陈十一
 * @Date: 2020-06-10 11:17:22
 * @LastEditTime: 2020-06-10 11:22:53
 * @LastEditors: 陈十一
 */

#include <iostream>
#include <math.h>
using namespace std;

// 实现快排算法
void quickSort(int array[], int X, int Y) //X,Y分别是数组的起始下标
{
  int z, y, i, k;
  if (X < Y)
  {
    z = X;
    y = Y;
    k = array[z]; //关键值
    do
    {
      while ((z < y) && (array[y] >= k))
        y--;
      if (z < y) //右边的元素小于k，移到k的左边。
      {
        array[z] = array[y];
        z++;
      }
      while ((z < y) && array[z] <= k)
        z++;
      if (z < y) //左边的值小于k，移到看k的右边
      {
        array[y] = array[z];
      }

    } while (z != y);
    array[z] = k;               //复制key值到array[z]
    quickSort(array, X, z - 1); //对z的左侧进行排序
    quickSort(array, z + 1, Y); //对z的右侧进行排序
  }
}

int main()
{
  int a[100], i;

  for (i = 0; i < 100; i++)
    cin >> a[i];
  quickSort(a, 0, 10);
  for (i = 0; i < 11; i++)
    cout << "输出数组元素" << a[i] << endl;
  system("pause");
  return 0;
}
