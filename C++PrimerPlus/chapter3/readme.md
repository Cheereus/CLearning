# 第三章 处理数据

## 简单变量

### 命名规则

1. 在名称中只能使用字母字符，数字和下划线
2. 名称的第一个字符不能是数字
3. 区分大写与小写字母
4. 不能将 C++ 关键字用作名称
5. 以两个下划线和大写字母开头的名称被保留给实现使用。以一个下划线开头的名称被保留给实现，用作全局标识符
6. C++ 对于名称的长度没有限制，但有些平台有长度限制

### 整型

基本整型

* short 至少16位
* int 至少与 short 一样长，通常为32位
* long 至少32位，且至少与 int 一样长
* long long 至少64位，且至少与 long 一样长

可以使用 sizeof 获取变量大小，使用头文件 limits 获取变量的取值范围

大括号的初始化方式：

```cpp
int ham = {24}; //set ham to 24
int emus{7};    //set emus to 7
int rocs = {};  //set rocs to 0
int pys{};      //set pys to 0
```

无符号整型

* unsigned short
* unsigned int
* unsigned long
* unsigned long long

整型字面值（进制表示）

```cpp
int chest = 42;   //十进制
int waist = 0x42; //16进制 以 0x 开头
int insem = 042;  //八进制 以 0  开头

cout << dec;      //以十进制输出
cout << hex;      //以十六进制输出
cout << oct;      //以八进制输出
```

char 类型是另一种整型

wcha_t (宽字符类型) 使用 wcin 和 wcout 来处理

const 限定符比 #define 好：

1. 能够明确指定类型
2. 可以使用 C++ 的作用域规则将定义限制在特定函数或文件中
3. 可以用于更复杂的类型

### 浮点数

浮点类型

1. float
2. double
3. long double

可以从 float.h 头文件中找到系统的相关限制

浮点数的优缺点

1. 可以表示整数之间的值
2. 由于有缩放因子，可以表示的范围大得多
3. 浮点数运算的速度比整数慢，且精度将降低

## 算术运算符

运算符的优先级和结合性

```cpp
float logs = 120 / 4 * 5;  //150 因为乘除法都是左结合，优先级相同
```

## 类型转换

* 将一种算术类型和值赋给另一种算术类型的变量时，C++ 将对值进行类型转换
* 表达式中包含不同的类型时，C++ 将进行类型转换
* 将参数传递给函数时，C++ 将对值进行类型转换

### 整型提升

* 在计算表达式时，C++ 将 bool, char, unsigned char, signed char 和 short 值转换为 int，这些转换被称为整型提升(integral promotion)

### 强制类型转换

```cpp
(long) nums //(typeName) value 来自C语言
long (nums) //typeName (value) 纯粹的C++

//注意
long double (num) //会报错，由于 long 和 double 未被正确识别为一体
(long double) (num) //正确(C++)

//注意 强制类型转换不会修改变量本身！！！
```
