#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define INF 0x3f3f3f3f
int main()
{
    int n,a[105][105],c[105]={0};
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        scanf("%d",&a[i][j]);
    int f[105]={INF};
    f[n]=0;
    for(int i=n-1;i>=1;i--)
    {
        int mins=INF,k=0;
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]!=0&&a[i][j]!=INF)
            {
                f[i]=f[j]+a[i][j];
                if(f[i]<mins)k=j;
                c[i]=k;
                mins=min(f[i],mins);
            }
        }
        f[i]=mins;
    }
    printf("minlong=%d\n1 ",f[1]);
    int x=c[1];
    while(x)
    {
        printf("%d ",x);
        x=c[x];
    }
    printf("\n");
    return 0;
}
