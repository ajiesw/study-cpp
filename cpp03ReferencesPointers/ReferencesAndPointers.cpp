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
    cout << "p��ֵ" << p << endl;

    p = &y;
    cout << "p��ֵ" << p << endl;
}

void pointers03(){
    int x;
// ͨ��������ֱ�ӷ��ʣ�������x�ڴ浥Ԫ�е���ֵ�޸�Ϊ10
    x = 10;
// ͨ��������ֱ�ӷ��ʣ���ʾ����x�ڴ浥Ԫ�б������ֵ10
    cout << x << endl;
// ���� ����һ�������x��������һ�µ�ָ�����p����ʼ��Ϊָ�����x
    int *p = &x;
// ͨ��ָ�����������x��������x�ڴ浥Ԫ�е���ֵ�޸�Ϊ90
    *p = 90;
// ͨ��ָ�������ӷ���x����ʾ����x�ڴ浥Ԫ�б������ֵ 90
    cout << *p <<endl;
// ֱ�ӷ���ָ�����������ʾp��������ĵ�ַ��������x�ĵ�ַ
    cout << p << endl;
}

void pointers04(){
    int x = 10;
    double y = 10.5;
    void *p;
    p = &x;
    cout << *((short *)p);
}