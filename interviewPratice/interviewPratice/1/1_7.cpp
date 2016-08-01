//
//  1_7.cpp
//  interviewPratice
//
//  Created by Jone on 16/7/29.
//  Copyright © 2016年 Jone. All rights reserved.
//
//原文：
//
//Write an algorithm such that if an element in an MxN matrix is 0, its entire row and column is set to 0.
//
//译文：
//
//写一个函数处理一个MxN的矩阵，如果矩阵中某个元素为0，那么把它所在的行和列都置为0.


#include "1_7.hpp"

void zeroArray(int **a, int m, int n) {
    int row[m], col[n];
    memset(row, 0, sizeof(row));
    memset(col, 0, sizeof(col));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i][j] == 0) {
                row[i] = true;
                col[j] = true;
            }
        }
    }
    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (row[i] || col[j]) {
                a[i][j] = 0;
            }
        }
    }
}