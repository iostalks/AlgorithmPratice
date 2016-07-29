//
//  main.cpp
//  interviewPratice
//
//  Created by Jone on 16/7/25.
//  Copyright © 2016年 Jone. All rights reserved.
//

#include <iostream>
#include "1_1.hpp"
#include "1_2.hpp"
#include "1_3.hpp"
#include "1_4.hpp"
#include "1_5.hpp"
#include "1_6.hpp"
#include "1_7.hpp"

int main(int argc, const char * argv[]) {
    
#if 0
    // 1.1
    string s_1_1 = "abcde\nf\n";
    cout << isUnique1(s_1_1) << " " << isUnique2(s_1_1) << endl;

    
    // 1.2
    char s[] = "ddaeiouff";
    reverseVowel(s);
    cout << s << endl;
    
    // 1.3
    char s1[] = "abcde";
    char s2[] = "aaabbb";
    char s3[] = "ffd";
    char s4[] = "abababc";
    char s5[] = "ccccc";

    removeDuplicate0(s1);
    removeDuplicate1(s2);
    removeDuplicate2(s3);
    removeDuplicate0(s4);
    removeDuplicate1(s5);
    
    cout << s1 << "\n" << s2 << "\n" << s3 << "\n" << s4 << "\n" << s5 << endl;
    
    // 1.4
    string s = "abcdef";
    string t= "fecdab";
    bool equal = isAnagrams(s, t);
    cout << equal << endl;
    return 0;

    // 1.5
    char m[100] = "I an  ";
    repleace1(m);
    cout << m << endl;


    
    // 1.6
    int a[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    for(int i=0; i<4; ++i){
        for(int j=0; j<4; ++j)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    transpose(a, 4);
    for(int i=0; i<4; ++i){
        for(int j=0; j<4; ++j)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
#endif
    
    
    int **a;
    int row = 4;
    int col = 5;
    
    a = (int **)malloc(row * sizeof(int*));
    
    for (int i = 0; i < row; ++i) {
        a[i] = (int *)malloc(col * sizeof(int));
    }
    
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if (i == 2 && j == 2) {
                a[i][j] = 0;
            } else {
                a[i][j] = i + 1;
            }
        }
    }
    
    
    for(int i=0; i<4; ++i){
        for(int j=0; j<4; ++j)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    
    zeroArray(a, row, col);

    for(int i=0; i<4; ++i){
        for(int j=0; j<4; ++j)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
