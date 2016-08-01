//
//  1_6.cpp
//  interviewPratice
//
//  Created by Jone on 16/7/28.
//  Copyright © 2016年 Jone. All rights reserved.
//

//原文：
//
//Given an image represented by an NxN matrix, where each pixel in the image is 4 bytes, write a method to rotate the image by 90 degrees. Can you do this in place?
//
//译文：
//
//一张图像表示成NxN的矩阵，图像中每个像素是4个字节，写一个函数把图像旋转90度。 你能原地进行操作吗？(即不开辟额外的存储空间)

#include "1_6.hpp"

void swap(int &a, int &b) {
    a = a^b;
    b = a^b;
    a = a^b;
}

/**
 1. 对角翻转
 2. 上下翻转
 **/
void transpose(int a[][4], int n) {
    void swap(int &a, int &b);
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            swap(a[i][j], a[j][i]);
        }
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n / 2; ++j) {
            swap(a[j][i], a[n-j-1][i]);
        }
    }
}