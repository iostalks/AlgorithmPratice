//
//  3_1.cpp
//  interviewPratice
//
//  Created by Jone on 16/8/8.
//  Copyright © 2016年 Jone. All rights reserved.
//

#include "3_1.hpp"



class stack3 {
private:
    int *buf;
    int ptop[3];
    int size;
    
public:
    stack3(int size = 300) {
        buf = new int[size*3];
        ptop[0] = ptop[1] = ptop[2] = -1;
        this->size = size;
    }

    ~stack3() {
        delete[] buf;
    }
    
    void push(int stackNum, int val) {
        int index = stackNum * size + ptop[stackNum] + 1;
        buf[index] = val;
        ++ptop[stackNum];
    }
    
    void pop(int stackNum) {
        if (empty(stackNum)) return;
        --ptop[stackNum];
    }
    
    int top(int statckNum) {
        if (empty(statckNum)) return MAX_INPUT;
        return buf[statckNum * size + ptop[statckNum]];
    }
    
    bool empty(int stackNum) {
        return ptop[stackNum] == -1;
    }
};

void test() {
    stack3 mystack;//stack3 mystack;
    for(int i=0; i<10; ++i)
        mystack.push(0, i);
    for(int i=10; i<20; ++i)
        mystack.push(1, i);
    for(int i=100; i<110; ++i)
        mystack.push(2, i);
    for(int i=0; i<3; ++i)
        cout<<mystack.top(i)<<" ";
    
    cout<<endl;
    for(int i=0; i<3; ++i){
        mystack.pop(i);
        cout<<mystack.top(i)<<" ";
    }
    mystack.push(0, 111);
    mystack.push(1, 222);
    mystack.push(2, 333);
    for(int i=0; i<3; ++i)
        cout<<mystack.top(i)<<" ";
}