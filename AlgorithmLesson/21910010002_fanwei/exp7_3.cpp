#include <iostream>
#include <queue>
#include <algorithm>
#define maxn 50050
using namespace std;
struct node
{
    int s,e,id;
    bool operator < (const node &a)const    //优先级队列排序条件。
    {
        return e>a.e;
    }
};
bool cmp(const node &a,const node &b)   //sort排序条件
{
    if(a.s==b.s)
        return a.e<b.e;
    else
        return a.s<b.s;
}
int main()
{
  printf("样例输入\n");
	int n,i;
  while(cin>>n)
    {
      		node a[maxn];
        int u[maxn];
        for(i=0;i<n;i++)
        {
            cin>>a[i].s>>a[i].e;
            a[i].id=i;
        }
        sort(a,a+n,cmp);
        priority_queue <node> q;
        int result=0;
		printf("样例输出\n");
        for(i=0;i<n;i++)
        {
            if(!q.empty()&&q.top().e<a[i].s)
            {
                u[a[i].id]=u[q.top().id];
                q.pop();
            }
            else
            {
                result++;
                u[a[i].id]=result;
            }
            q.push(a[i]);
        }
        cout<<result<<endl;
        for(i=0;i<n;i++)
            cout<<u[i]<<endl;
    }
    return 0;
}
