//
// Created by kuer on 2022/9/18.
//
#include <iostream>
using namespace std;

int main(){
    double x;
    cout << "克与克拉和盎司的换算" << endl << "请输入克重" << endl;

    cin >> x;

    cout << x << "克等于" << x * 5 << "克拉" << endl;

    cout << x << "克等于" << x / 31.1034807 << "盎司" << endl;

    return 0;
}