//
//  1_7.cpp
//  interviewPratice
//
//  Created by Jone on 16/7/29.
//  Copyright © 2016年 Jone. All rights reserved.
//

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