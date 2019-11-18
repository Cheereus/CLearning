#include<stdio.h>
#include<stdlib.h> 
int add(int *a,int left,int right);

int main()
{
    int i,n;
    int *array;
    printf("请输入数组的大小：");
    scanf("%d", &n);
    array = (int*) malloc(sizeof(int) * n);
    printf("请输入数据（用空格分隔）：");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int sum=add(array,0,n-1);
    printf("%d\n",sum);

    return 0;
} 

int add(int *a,int left,int right)
{
    int mid;
    if(left==right)
    {
        return a[left];
    }
    else if (left == right-1)
    {
        return a[left]+a[right];
    }
    else
    {
        mid=(left+right)/2;
        return add(a,left,mid)+add(a,mid+1,right);
    }
}