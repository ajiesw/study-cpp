//
// Created by kuer on 2022/10/12.
//
#include <iostream>
#include "work05.h"

using namespace std;
int main(){
    double x,y;

    cin >> x >> y;

    cout << calcRectangle(x, y) << endl;
}

double calcRectangle(double x, double y){
    return x * y;
}