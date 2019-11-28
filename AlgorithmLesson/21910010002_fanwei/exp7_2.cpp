#include <stdio.h>
#include <algorithm>
using namespace std;
int a[10010],b[10010];
int main()
{
    int n;
	printf("输入样例：\n");
    while(scanf("%d",&n)!=EOF)
    {
        int i,j,s=n,lose=0,win=0,e=0,ping=0,sum;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(j=0;j<n;j++)
            scanf("%d",&b[j]);
        sort(a,a+n);
        sort(b,b+n);
        for(i=0;i<n;i++)
        {
            for(j=e;j<s;j++)
            {
                if(a[i]<b[j])
                {
                    lose++;s--;break;
                }
                else if(a[i]>b[j])
                {
                    e++;win++;break;
                }
                else if(a[i]==b[j])
                {
                    if(a[n-1]<b[s-1])
                    {
                        lose++;
                        s--;
                        break;
                    }
                    else if(a[n-1]==b[s-1])
                    {
                        if(a[i]<b[s-1])
                        {
                            lose++;s--;break;
                        }
                        else if(a[i]==b[s-1])
                        {
                            ping++;s--;break;
                        }
                    }
                    else if(a[n-1]>b[s-1])
                    {
                        win++;n--;s--;i--;break;
                    }
                }
            }
        }
        sum=(win-lose)*200;
		printf("输出样例：\n");
        printf("%d\n",sum);
    }
    return 0;
}
