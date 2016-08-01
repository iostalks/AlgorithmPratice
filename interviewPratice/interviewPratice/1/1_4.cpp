//
//  1_4.cpp
//  interviewPratice
//
//  Created by Jone on 16/7/26.
//  Copyright © 2016年 Jone. All rights reserved.
//
//原文：
//
//Write a method to decide if two strings are anagrams or not.
//
//译文：
//
//写一个函数判断两个字符串是否是变位词。
//变位词(anagrams)指的是组成两个单词的字符相同，但位置不同的单词。比如说， abbcd和abcdb就是一对变位词。该题目有两种做法：
#include "1_4.hpp"

/**
 先排序再比较
 */
bool isAnagrams0(string s, string t) {
    if (s == "" || t == "") return false;
    if (s.length() != t.length()) return false;
    
    sort(&s[0], &s[0] + s.length());
    sort(&t[0], &t[0] + t.length());
    if (s == t) return true;
    else return false;
}

/**
 使用数组统计，加减相互抵消最后为零O(n)
 */
bool isAnagrams(string s, string t) {
    if (s == "" || t == "") return false;
    if (s.length() != t.length()) return false;
    int c[256];
    memset(c, 0, sizeof(c));
    for (int i = 0; i < s.length(); ++i) {
        ++c[s[i]];
        --c[t[i]];
    }
    
    for (int i = 0; i < 256; ++i) {
        if (c[i] != 0) return false;
    }
    return true;
}