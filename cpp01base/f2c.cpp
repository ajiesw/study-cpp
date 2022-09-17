//
// Created by kuer on 2022/9/17.
//

#include "f2c.h"
#include <iostream>
using namespace std;
int main()
{
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