#include<stdio.h>
#include"stdlib.h"
int job[100][2],x[100],bestx[100],n,f1=0,bestf,f2[100]={0};
void swap(int i,int j);
void jtry(int i);

void jtry(int i){
   int j;
   if(i==n+1){   //搜索到底，记录
    for(j=1;j<=n;j++)
       bestx[j]=x[j];
       bestf=f2[n];
   }
   else     //没到底，交换进行全排列
   for(j=i;j<=n;j++){   //交换i--n
       f1=f1+job[x[j]][1];
      if(f2[i-1]>f1)
        f2[i]=f2[i-1]+job[x[j]][2];
      else
        f2[i]=f1+job[x[j]][2];
    if(f2[i]<bestf){   //比目前的最小时间还小，进行递归全排列
        swap(i,j);
        jtry(i+1);
        swap(i,j);   //恢复原来的顺序
    }
    f1=f1-job[x[j]][1];   //把当前作业x[j][1]的去掉,向前一个回溯
   }
}
void swap(int i,int j){
   int t;
   t=x[i];
   x[i]=x[j];
   x[j]=t;
}
int main(){
   int i,j;
   printf("输入作业数量：");
   scanf("%d",&n);
   printf("\n依次输入每个作业的时间(空格隔开):");
   for(i=1;i<=2;i++)
    for(j=1;j<=n;j++)
      scanf("%d",&job[j][i]);
   bestf=32767;   //先随便给一个数，尽量大
   for(i=1;i<=n;i++)
    x[i]=i;       //初始化顺序
   jtry(1);
   printf("\n最佳顺序：");
   for(i=1;i<=n;i++)
    printf("%d",bestx[i]);
    printf("\n时间为：%d\n",bestf);
}
