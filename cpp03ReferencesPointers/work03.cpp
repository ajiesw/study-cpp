//
// Created by kuer on 2022/9/18.
//

#include "work03.h"
#include <iostream>

using namespace std;

int factorial(){
    cout << "请输入N来求其阶乘" << endl;
    int N;
    cin >> N;
    int result = 1;
    while (N >= 1){
        result *= N--;
    }
    cout << "其阶乘N!为" << result << endl;
    return result;
}
