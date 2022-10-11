//
// Created by kuer on 2022/9/21.
//
#include <iostream>
#include "work04.h"

using namespace std;
int main(){
    int a[] = {6, 4, 7, 2, 9, 1};

    int *p1, *p2, *p3;

    p1 = a;
    for (int i = 0; i < 6; ++i){
        cout << *(p1 + i) << endl;
    }
    cout << endl;
    p2 = &a[2];

    p3 = &a[4];

    cout << p3 - p2 << endl;

    cout << endl;

    for (int *i = a; i <= &a[5]; ++i) {
        cout << i << endl;
    }

    char c = 65;
    cout << c << endl;
    char str[3][5] = {"tom", "john", "mary"};
    wchar_t d = L'你';
    wchar_t e[] = L"你好";

    calcArray();
}