#include <iostream>
using namespace std;

const int maxNum = 1 << 10;
// 棋盘
int chess[maxNum][maxNum];
// L型牌编号
int number;

void chessBoard(int row, int column, int x, int y, int siz) {
    // 递归出口
    if(siz == 1) {
        return;
    }

    // 对半划分成2^(siz - 1) * 2^(siz - 1)的棋盘
    int s = siz / 2;
    // L型牌编号自增
    int t = ++number;
    // 中间点，以此判别(x,y)在哪个子棋盘中
    int centerRow = row + s;
    int centerColumn = column + s;
    // 黑色方格在左上子棋盘
    if(x < centerRow && y < centerColumn) {
        chessBoard(row, column, x, y, s);
    } else {
        // 不在则填充左上子棋盘的右下角
        chess[centerRow - 1][centerColumn - 1] = t;
        // 然后覆盖其他格子，注意这时(x,y)要看做已填充位置
        chessBoard(row, column, centerRow - 1, centerColumn - 1, s);
    }

    // 黑色方格在右上子棋盘
    if(x < centerRow && y >= centerColumn) {
        chessBoard(row, centerColumn, x, y, s);
    } else {
        // 不在则填充右上子棋盘的左下角
        chess[centerRow - 1][centerColumn] = t;
        // 然后覆盖其他格子，注意这时(x,y)要看做已填充位置
        chessBoard(row, centerColumn, centerRow - 1, centerColumn, s);
    }

    // 黑色方格在左下子棋盘
    if(x >= centerRow && y < centerColumn) {
        chessBoard(centerRow, column, x, y, s);
    } else {
        // 不在则填充左下子棋盘的右上角
        chess[centerRow][centerColumn - 1] = t;
        // 然后覆盖其他格子，注意这时(x,y)要看做已填充位置
        chessBoard(centerRow, column, centerRow, centerColumn - 1, s);
    }
    // 黑色方格在右下子棋盘
    if(x >= centerRow && y >= centerColumn) {
        chessBoard(centerRow, centerColumn, x, y, s);
    } else {
        // 不在则填充右下子棋盘的左上角
        chess[centerRow][centerColumn] = t;
        // 然后覆盖其他格子，注意这时(x,y)要看做已填充位置
        chessBoard(centerRow, centerColumn, centerRow, centerColumn, s);
    }
}

int main() {
    // 大小，黑色方格位置
    int siz, x, y;
    while(true) {
        cout << "(x,y)从(0,0)开始,输入数据为0 0 0即结束程序。" << endl;
        cout << "请输入棋盘大小和黑色方格位置(x,y)：";
        cin >> siz >> x >> y;
        // 退出条件
        if(siz == 0) {
            break;
        }
        // 涂黑(x,y)，初始化L型牌编号
        chess[x][y] = number = 1;

        // 分治法填满棋盘
        chessBoard(0, 0, x, y, siz);

        // 输出该棋盘
        for(int i = 0; i < siz; i++) {
            for(int j = 0; j < siz; j++) {
                cout << chess[i][j] << "\t";
            }
            cout << endl << endl << endl;
        }
    }
    return 0;
}
