//
// Created by kuer on 2022/9/18.
//

#include "work02.h"
#include <iostream>
using namespace std;

/**
 * 计算并显示表达式x^2+2x+6的结果
 * @return
 */
int calc(){
    int x;
    cout << "请输入x的值" << endl;
    cin >> x;
    cout << "计算x^2+2x+6的结果为" << x * x + 2 * x + 6 << endl;
    return 0;
}
