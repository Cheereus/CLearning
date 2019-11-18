#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[105][55];
    int a[105];
    char ch[105];
    int n,m;//n表示输入z字符串的长度，m表示输入字符串行数
    cin>>m>>n;
    //输入并计算该输入行的逆序数并将它存储到数组a中
    for(int i = 0;i < n;i++)
    {
        cin>>str[i];
        int count = 0;
        for(int j = 0;j < m;j++)
        {
            for(int k = 0;k < j;k++)
            {
                if(str[i][j]<str[i][k])
                    count++;
            }
        }
        a[i] = count;
    }
    //根据数组a中存储数字的大小进行冒泡排序
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n - i - 1;j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                //根据数组a存储数据的大小，将对应的字符串交换
                strcpy(ch,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],ch);
            }
        }
    }
    cout<<"输出："<<endl;
    for(int i = 0;i < n;i++)
        cout<<str[i]<<endl;
    return 0;

}
