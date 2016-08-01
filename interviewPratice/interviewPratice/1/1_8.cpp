//
//  1_8.cpp
//  interviewPratice
//
//  Created by Jone on 16/7/29.
//  Copyright © 2016年 Jone. All rights reserved.
//
//原文：
//
//Assume you have a method isSubstring which checks if one word is a substring of another. Given two strings, s1 and s2, write code to check if s2 is a rotation of s1 using only one call to isSubstring ( i.e., “waterbottle” is a rotation of “erbottlewat”).
//
//译文：
//
//假设你有一个isSubstring函数，可以检测一个字符串是否是另一个字符串的子串。 给出字符串s1和s2，只使用一次isSubstring就能判断s2是否是s1的旋转字符串， 请写出代码。旋转字符串：”waterbottle”是”erbottlewat”的旋转字符串。

#include "1_8.hpp"

bool isSubstring(string s1, string s2) {
    if (s1.find(s2) != string::npos) return true;
    else return false;
}

bool isRotation(string s1, string s2) {
    if (s1.length() <= 0 || s1.length() != s2.length()) return false;
    string s3 = s1 + s1;
    return isSubstring(s3, s2);
}