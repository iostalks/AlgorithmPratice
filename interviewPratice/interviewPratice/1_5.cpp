//
//  1_5.cpp
//  interviewPratice
//
//  Created by Jone on 16/7/27.
//  Copyright © 2016年 Jone. All rights reserved.
//

//    原文：
//
//    Write a method to replace all spaces in a string with ‘%20’.
//
//    译文：
//
//    写一个函数，把字符串中所有的空格替换为%20 。

#include "1_5.hpp"

char *replaceWhiteSpace0(char *s) {
    if (s == NULL) return NULL;
    size_t len = strlen(s);
    if (len == 0) return NULL;
    int cnt = 0;
    for (int i = 0; i < len; ++i) {
        if (s[i] == ' ') ++cnt;
    }
    char *cc = new char[len + 2 * cnt + 1];
    int p = 0;
    for (int i = 0; i < len; ++i) {
        if (s[i] == ' ') {
            cc[p] = '%';
            cc[p+1] = '2';
            cc[p+2] = '0';
            p += 3;
        } else {
            cc[p] = s[i];
            ++p;
        }
    }
    cc[p] = '\0';
    return cc;
}

/**
 错误解法
 */
void repleace1(char *s) {
    if (s == NULL) return;
    int len = (int)strlen(s);
    if (len == 0) return;
    int cnt = 0;
    for (int i = 0; i < len; ++i) {
        ++cnt;
    }
    
    int p = (int)(len + cnt * 2);
    s[p--] = '\0';
    for (int i = len - 1; i >= 0; --i) {
        if (s[i] == ' ') {
            s[p] = '0';
            s[p-1] = '2';
            s[p-2] = '%';
            p -= 3;
        } else {
            s[p] = s[i];
            --p;
        }
    }
}
