//
// Created by kuer on 2022/9/18.
//
#include <iostream>

void pointers01();

void pointers02();

void pointers03();
void pointers04();

using namespace std;

int main(){
    int x;
    cin >> x;

    cout << x * x << endl;

    int &xa = x;
    cout << xa * xa << endl;
//    pointers01();
//    pointers02();
//    pointers03();
    pointers04();
    return 0;
}

void pointers01(){
    int x = 10;

    cout << x << endl << &x << endl;
}

void pointers02(){
    int x, y;
    int *p = &x;
    cout << "p的值" << p << endl;

    p = &y;
    cout << "p的值" << p << endl;
}

void pointers03(){
    int x;
// 通过变量名直接访问，将变量x内存单元中的数值修改为10
    x = 10;
// 通过变量名直接访问，显示变量x内存单元中保存的数值10
    cout << x << endl;
// 或者 定义一个与变量x数据类型一致的指针变量p。初始化为指向变量x
    int *p = &x;
// 通过指针变量简介访问x，将变量x内存单元中的数值修改为90
    *p = 90;
// 通过指针变量间接访问x，显示变量x内存单元中保存的数值 90
    cout << *p <<endl;
// 直接访问指针变量自身，显示p中所保存的地址，即变量x的地址
    cout << p << endl;
}

void pointers04(){
    int x = 10;
    double y = 10.5;
    void *p;
    p = &x;
    cout << *((short *)p);
}