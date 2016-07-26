//
//  1_1.cpp
//  interviewPratice
//
//  Created by Jone on 16/7/25.
//  Copyright © 2016年 Jone. All rights reserved.
//
// 原文：
// 
// Implement an algorithm to determine if a string has all unique characters. What if you can not use additional data structures?
// 
// 译文：
// 
// 实现一个算法来判断一个字符串中的字符是否唯一(即没有重复).不能使用额外的数据结构。 (即只使用基本的数据结构)
//

/**
 思路：明确字符的范围
 */

#include "1_1.hpp"

// 利用整数空间
bool isUnique1(string s) {
    int a[128];
    memset(a, 0, sizeof(a));
    size_t len = s.length();
    for (int i = 0; i < len; ++i) {
        int v = s[i];
        if (a[v]) return false;
        a[v] = true;
    }
    return true;
}

// 利用位运算
bool isUnique2(string s) {
    int a[4];
    memset(a, 0, sizeof(a));
    size_t len = s.length();
    for (int i = 0; i < len; ++i) {
        int v = (int)s[i];
        int idx = v / 32, shift = v % 32;
        if (a[idx] & (1 << shift)) return false;
        a[idx] |= (1 << shift);
    }
    return true;
}