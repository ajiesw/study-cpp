//
// Created by kuer on 2022/9/21.
//
#include <iostream>
#include "work04.h"
using namespace std;

void calcArray(){
    int an[10] = {1};

    int sum = 0;

    for (int i = 1; i < 10; ++i){
        an[i] = an [i - 1] + 3;
    }

    for (int i = 0; i < 10; ++i){
        cout << "an" << i << ":" << an[i] << "\t";
        if (i < 5){
            sum += an[i];
        }
    }
    cout << endl;

    cout << "sum:" << sum;
}