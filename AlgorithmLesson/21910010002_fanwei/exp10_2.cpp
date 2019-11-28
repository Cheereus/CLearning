#include<stdio.h>
#include<stdlib.h>
#define C 12 	//列 
#define R 12	//行 
 
int chessboard[R][C] ;
int move[8][2] = {{1,2}, {2,1} ,{2,-1} ,{1,-2} ,{-1,-2} ,{-2,-1} ,{-2,1} ,{-1,2}};
int cnt = 0;	//步数计数器 
int num = 0;	//解数计数器 
 
 
void initialCB(){
	//初始化棋盘
	for(int i = 0; i < R; i++){	
		if(i==0 || i==1 || i==10 || i==11){
			for(int j = 0; j < C; j++){
			chessboard[i][j] = -1;		
			} 
		}
		else{
			for(int j = 0; j < C; j++){
				if(j==0 || j==1 || j==10 || j==11){
					chessboard[i][j] = -1;
				}
				else{
					chessboard[i][j] = 0;		
				}
			} 
		}		
	} 
}
 
void Print(){
	printf("第%d种解：\n", ++num); 
	for(int i = 2; i < R-2; i++){
		for(int j = 2; j < C-2; j++){
			printf("%3d", chessboard[i][j]);
		}
		printf("\n");
	}
	printf("**************************\n");
}
 
void Horse(int x, int y){
	chessboard[x][y] = ++cnt;	//找到满足条件的点就把马放下去 
	if(cnt==64){	//若棋盘所有位置都访问过 
		Print(); 	//则输出解	
	}
	else{
		int a,b;
		for(int i = 0; i < 8; i++){		//遍历当前位置的每一个方向，
			//	找满足条件的点 ，将移动增量加到进入位置的坐标中 
			a = x + move[i][0];		 
			b = y + move[i][1];
			if(chessboard[a][b] == 0){	//如果该点满足移动条件	
				Horse(a,b);				//递归调用主功能函数 
				chessboard[a][b] = 0;	//从上一个点返回来后将上一个点的记录抹掉，回调到上一个状态 
				--cnt;
			} 
		} 				
	} 
}
 
int main(void){
	printf("求马踏棋盘问题的所有解\n\n");
	for(int i = 2; i < R-2; i++){
		for(int j = 2; j < C-2; j++){
			initialCB();
			cnt = 0; 
			Horse(i,j);
		}
	} 
	printf("\n end\n"); 
	return 0;
} 
