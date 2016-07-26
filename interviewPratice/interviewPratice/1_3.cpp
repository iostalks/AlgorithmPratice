//
//  1_3.cpp
//  interviewPratice
//
//  Created by Jone on 16/7/26.
//  Copyright © 2016年 Jone. All rights reserved.
//

//Design an algorithm and write code to remove the duplicate characters in a string without using any additional buffer. NOTE: One or two additional variables are fine. An extra copy of the array is not.
//
//FOLLOW UP
//
//Write the test cases for this method.
//
//译文：
//
//设计算法并写出代码移除字符串中重复的字符，不能使用额外的缓存空间。注意： 可以使用额外的一个或两个变量，但不允许额外再开一个数组拷贝。
//
//进一步地，
//
//为你的程序写测试用例。


#include "1_3.hpp"

/**
 不可以开任何数组
 */
void removeDuplicate0(char s[]) {
    size_t len = strlen(s);
    if (len < 2) return;
    int p = 0;
    
    for (int i = 0; i < len; ++i) {
        if (s[i] != '\0') {
            s[p++] = s[i];
            for (int j = i + 1; j < len; ++j)
                if (s[j] == s[i])
                    s[j] = '\0';
        }
    }
    s[p] = '\0';
}

/**
 可以开一个毫不相关的数组
 */
void removeDuplicate1(char s[]) {
    size_t len = strlen(s);
    if (len < 2) return;
    int a[256], p = 0;
    memset(a, 0, sizeof(a));
    for (int i = 0; i < len; ++i) {
        int idx = s[i];
        if (!a[idx]) {
            s[p++] = s[i];
            a[idx] = true;
        }
    }
    s[p] = '\0';
}

/**
 字符之后 a-z， 用一个整型的位就搞定
 */
void removeDuplicate2(char s[]) {
    size_t len = strlen(s);
    if (len < 2) return;
}


