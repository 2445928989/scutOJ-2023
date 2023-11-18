/*题目描述
编写程序，将一个整型变量右移 4 位，并以二进制数形式输出该整数在移位前和移位后的数值。观察系统填补空缺位的情况。
 
输入
一个整数值
输出
移位前的整数值，移位前的二进制值，右移4位的整数值，右移4位的二进制值（一个数据占一行）
样例输入 Copy
42
-5
65
样例输出 Copy
42
00000000000000000000000000101010
2
00000000000000000000000000000010
-5
11111111111111111111111111111011
-1
11111111111111111111111111111111
65
00000000000000000000000001000001
4
00000000000000000000000000000100
提示
注意使用移位运算符以及<bitset>头文件*/

#include<iostream>
#include<bitset>
using namespace std;
int main() {
    int num;
    while (cin >> num) {
        bitset<32>bin(num);
        cout <<num<<endl<< bin << endl;
        num>>= 4;
        bin = num;
        cout << num << endl << bin << endl;
    }
}
