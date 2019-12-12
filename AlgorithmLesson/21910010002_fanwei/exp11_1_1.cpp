// 算法一：优先队列式分支限界法：

#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct {
    int no; // 结点标号 
    int id; // 节点id 
    int sw; // 背包中物品的重量 
    int sv; // 背包中物品的价值 
    double prior; //   sv/sw 
}Node;
 
int surplusValue(int *v,int n,int y) {
	int sum = 0;
	for(int i = y; i <= n; i++) {
		sum += v[i];
	}
	
	return sum;
}
 
void qsort(Node *que,int l,int r) {
	int len = r - l + 1;
	int flag;
	
	for(int i = 0; i < len; i ++) {
		flag = 0;
		for(int j = l; j < l + len - i; j++) {
			if(que[j].prior < que[j+1].prior) {
				Node t = que[j];
				que[j] = que[j+1];
				que[j+1] = t;
				flag = 1;
			}
		}
		//if(!flag ) return;
	}
}
 
 void branchknap(int *w,int *v,int c,int n) {
 	int bestv = 0;
	int f = 0;
	int r = 0;
	Node que[3000];
	memset(que,0,sizeof(que));
	int path[15];
	que[0].no = 1;
	que[0].id = que[0].sv = que[0].sw = que[0].prior = 0;
 
 	while(f <= r) {
 		Node node = que[f];
 		printf("%d %d %d %d\n",node.id+1,node.no,node.sw,node.sv);
 		
 		if(node.no >= pow(2,n)) {
 			if(node.sv > bestv) {
 				bestv = node.sv;
 				printf("bestv=%d, bestx=[",bestv);
      			int temp = node.no;
				int i = 0;
				while(temp > 1) {
					if(temp % 2 == 0)
						path[i] = 1;
					else 
						path[i] = 0;
					temp /= 2;
					i++ ;
				}
				i--;
				while(i >= 0) {
					printf(" %d",path[i]);
					i--;
				}
				printf(" ]\n");
			 }
		 } else {
		 	if((node.sw + w[node.id + 1]) <= c && surplusValue(v,n,node.id+1) + node.sv > bestv) {
		 		r++;
		 		que[r].id = node.id + 1;
		 		que[r].no = node.no*2;
		 		int id = node.id + 1;
		 		que[r].sv = node.sv + v[id];
		 		que[r].sw = node.sw + w[id];
		 		que[r].prior = que[r].sv / (que[r].sw*1.0);
			 }
			 
			 if(surplusValue(v,n,node.id+2) + node.sv > bestv) {
			 	r++;
			 	que[r].id = node.id + 1;
			 	que[r].no = node.no*2 + 1;
			 	que[r].sv = node.sv;
			 	que[r].sw = node.sw;
			 	que[r].prior = node.prior;
			 }
		 }
		 f++;
		 qsort(que,f,r);
	 }
 	
 }
 
 int main() {
 	int c,n;
 	int w[15],v[15];
	printf("输入样例：\n");
    while(~scanf("%d %d",&c,&n)){
		 
        for(int i = 1; i <= n; i++) {
            scanf("%d %d",&w[i],&v[i]);                  
        }
        printf("输出样例：\n");
        branchknap(w,v,c,n);
    }
    return 0;
}
