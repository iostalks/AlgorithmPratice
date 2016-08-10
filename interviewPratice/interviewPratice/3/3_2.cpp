//
//  3_2.cpp
//  interviewPratice
//
//  Created by Jone on 16/8/9.
//  Copyright © 2016年 Jone. All rights reserved.
////
//原文：
//
//How would you design a stack which, in addition to push and pop, also has a function min which returns the minimum element? Push, pop and min should all operate in O(1) time.
//
//译文：
//
//实现一个栈，除了push和pop操作，还要实现min函数以返回栈中的最小值。 push，pop和min函数的时间复杂度都为O(1)。
//


#include "3_2.hpp"
const int MAX_INT = ~(1<<31); //

typedef struct element {
    int val;
    int min;
}element;

class stackWithMin {
private:
    element *buf;
    int cur;
    
public:
    
    stackWithMin(int size = 10000) {
        buf = new element[size];
        buf[0].min = MAX_INT;
        cur = 0;
    }
    
    ~stackWithMin() {
        delete[] buf;
    }
    
    void push(int val) {
        buf[++cur].val = val;
        if (val < buf[cur - 1].min) {
            buf[cur].min = val;
        } else {
            buf[cur].min = buf[cur-1].min;
        }
    }
    
    void pop(void) {
        --cur;
    }
    
    int min(void) {
        return buf[cur].min;
    }
    
    int top(void) {
        return buf[cur].val;
    }
    
    bool isEmpty(void) {
        return cur == 0;
    }
};


class stack {
public:
    stack(int size = 1000) {
        buf = new int[size];
        cur = -1;
    }
    
    ~stack() {
        delete[] buf;
    }
    
    void push(int val) {
        buf[cur++] = val;
    }
    
    void pop() {
        if (empty()) return;
        --cur;
    }
    
    int top() {
        if (empty()) {
            return -MAX_INT;
        }
        
        return buf[cur];
    }
    
    bool empty() {
        return cur == -1;
    }
    
    
private:
    int *buf;
    int cur;
};


class stackTwo {
public:
    stackTwo() {
        
    }
    
    ~stackTwo() {
        
    }
    
    void push(int val) {
        stack1.push(val);
        if (val < stack2.top()) {
            stack2.push(val);
        }
    }
    
    void pop() {
        if (stack1.top() == stack2.top()) {
            stack2.pop();
        }
        stack1.pop();
    }
    
    int top() {
        return stack1.top();
    }
    
    bool empty() {
        return stack1.empty();
    }
    
    int min() {
        if (stack2.empty()) return MAX_INT;
        return stack2.top();
    }
    
private:
    stack stack1, stack2;
};








