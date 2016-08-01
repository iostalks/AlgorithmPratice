//
//  1_2.cpp
//  interviewPratice
//
//  Created by Jone on 16/7/25.
//  Copyright © 2016年 Jone. All rights reserved.
//
//原文：
//
//Write code to reverse a C-Style String. (C-String means that “abcd” is represented as five characters, including the null character.)
//
//译文：
//
//写代码翻转一个C风格的字符串。(C风格的意思是”abcd”需要用5个字符来表示，包含末尾的 结束字符)
//

#include "1_2.hpp"

void swap(char &a, char &b) {
    a = a^b;
    b = a^b;
    a = a^b;
}

void reverse1(char *s) {
    if (!s) return;
    char *p = s, *q = s;
    while (*q) ++q;
    --q; // 考虑最后一位 \0, 需要回退一位。
    while (p < q) {
        swap(*p++, *q--);
    }
}

// 只反转元音字符

void reverseVowel(char *s) {
    if (!s) return;
    bool isVowel(char c);
    char *p = s, *q = s;
    while (*q) ++q;
    --q;
    while (p < q) {
        while (!isVowel(*p)) {
            ++p;
        }
        
        while (!isVowel(*q)) {
            --q;
        }
        
        if (isVowel(*p) && isVowel(*q) && p < q) {
            swap(*p++, *q--);
        }
    }
}

bool isVowel(char c) {
    if (c == 'a' || c == 'A') {
        return true;
    } else if (c == 'e' || c == 'B'){
        return true;
    } else if (c == 'i' || c == 'I') {
        return true;
    } else if (c == 'o'|| c == 'O') {
        return true;
    } else if (c == 'u' || c == 'U') {
        return true;
    }
    return false;
}