//
// Created by kuer on 2022/9/17.
//

#include "F2c.h"
#include <iostream>
using namespace std;
int main()
{
    int a = 46;
    short b = (short ) a;
    long c = long (-32);
    char c1 = 23;
    char c2 = 41;
    int c3 = c1 % c2;
    // 申请内存空间
    double ctemp, ftemp;
    // 从键盘输入华氏温度
    cin >> ftemp;
    // 温度换算
    ctemp = (ftemp - 32)  / 1.8;
    // 在显示器上输出摄华氏温度
    cout << ctemp;
    // 程序结束，退出
    return 0;
}