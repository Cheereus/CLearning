#include<iostream>
#include<cstdio>
using namespace std;
 
#define maxnumber 20
int  src[maxnumber], b[maxnumber], index[maxnumber];
int main()
{
	int n,max,p;
	cout << "输入序列的长度:";
	cin >> n;
	cout << "请输入序列元素:";
	//进行初始化
	for (int i = 0; i < n; ++i)
	{
		cin >> src[i];
		b[i] = 1;
		index[i] = 0;
	}
	//进行动态规划
	for (int i = n - 2; i >= 0; --i)
	{
		p = 0;
		max = 0;
		for (int j = i + 1; j < n; ++j)
		{
			if (src[i] < src[j]&&b[j]>max)      //当前序列的值比之前序列的值小,满足不下降规则,并且找到之前不下降序列的最大值
			{
				max = b[j];	//存储最大值
				p = j;		//存储最大不下降序列的下标
			}
			if (max)
			{
				b[i] = b[p] + 1;
				index[i] = p;
			}
		}
	}
	max = 0;
	p = 0;
	for (int i = 0; i < n; ++i)
	{
		if (b[i] > max)
		{
			max = b[i];
			p = i;
		}
	}
	cout << "最长不下降序列长度为" << max << endl;
	cout << src[p]<<" ";
	p = index[p];
	while (p)
	{
		cout << src[p]<<" ";
		p = index[p];
	}
	cout << endl;
	return 0;
}
