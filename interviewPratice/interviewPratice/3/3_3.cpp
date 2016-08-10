//
//  3_3.cpp
//  interviewPratice
//
//  Created by Jone on 16/8/10.
//  Copyright © 2016年 Jone. All rights reserved.
//

#include "3_3.hpp"

#define STACK_SIZE 1000
#define STACK_NUM 10

class stack {
private:
    int *buf;
    int cur;
    int capacity;
public:
    stack(int cap = STACK_SIZE) {
        buf = new int[cap];
        cur = -1;
        capacity = cap;
    }
    
    ~stack() {
        delete[] buf;
    }
    
    void push(int val) {
        assert(!full());
        buf[cur++] = val;
    }
    
    void pop() {
        assert(!empty());
        --cur;
    }
    
    int top() {
        assert(!empty());
        return buf[cur];
    }
    
    bool empty() {
        return cur == -1;
    }
    
    bool full() {
        return cur == capacity - 1;
    }
};

class SetOfStacks {
private:
    stack *st;
    int cur;
    int capacity;
    
public:
    SetOfStacks(int capa = STACK_NUM) {
        st = new stack[capa];
        cur = 0;
        capacity = capa;
        
    }
    
    ~SetOfStacks() {
        delete[] st;
    }
    
    void push(int val) {
        if(st[cur].full()) ++cur;
        st[cur].push(val);
    }
    
    void pop() {
        while (st[cur].empty()) --cur;
        assert(cur >= 0);
        st[cur].pop();
    }
    
    void popAtIndex(int index) {
        assert(index >= 0 && index < STACK_NUM);
        while(st[index].empty()) --cur;
        st[index].pop();
    }
    
    int top() {
        while(st[cur].empty()) --cur;
        return st[cur].top();
    }
    
    bool empty() {
        while (cur >= 0 && !st[cur].empty()) --cur;
        if (cur == -1) return true;
        else return false;
    }
    
    bool full() {
        if (capacity == STACK_NUM - 1) {
            return st[cur].full();
        } else {
            return false;
        }
    }
};


























