//
//  main.cpp
//  interviewPratice
//
//  Created by Jone on 16/7/25.
//  Copyright © 2016年 Jone. All rights reserved.
//

#include <iostream>
//#include "1_1.hpp"
//#include "1_2.hpp"
//#include "1_3.hpp"
//#include "1_4.hpp"
//#include "1_5.hpp"
//#include "1_6.hpp"
//#include "1_7.hpp"
//#include "1_8.hpp"
#include "2_1.hpp"
#include "2_2.hpp"
#include "2_3.hpp"
#include "2_4.hpp"

node *init(int a[], int n) {
    node *head = nullptr, *p = nullptr;
    for (int i = 0; i < n; ++i) {
        node *nd = new node;
        nd -> data = a[i];
        if (i == 0) {
            head = p = nd;
            continue;
        }
        p -> next = nd;
        p = nd;
    }
    return head;
}

void printNode(node *head) {
    while(head){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(int argc, const char * argv[]) {
#if 0
    int n = 10;
    int a[] = {
        9, 2, 1, 3, 5, 6, 2, 6, 3, 1
    };
    node *head = init(a, n);

    // 2.1
    int n = 10;
    int a[] = {
        3, 2, 1, 3, 5, 6, 2, 6, 3, 1
    };
    
    node *head = init(a, n);
//    removeDumplicateNode0(head);
    removeDumplicateNode1(head);
    printNode(head);

    
    // 2.2
    int n = 10;
    int a[] = {
        9, 2, 1, 3, 5, 6, 2, 6, 3, 1
    };
    node *head = init(a, n);
    node *p = findNthToLast1(head, 6);
    if(p) cout<<p->data<<endl;
    else cout << "the length of link is not long enough" << endl;
    
    // 2.3
    int cc = 10;
    node *c = head;
    while (--cc) c = c -> next;
    printNode(head);
    if (deleteOneNode(c)) {
        printNode(head);
    } else {
        cout << "failue" << endl;
    }
#endif
    
    // 2.4
    int n = 3;
    int a[] = {
        1, 2, 9
    };
    int m = 3;
    int b[] = {
        9, 9, 2
    };
    
    node *p = init(a, n);
    node *q = init(b, m);
    node *res = addLink(p, q);
    if(p) printNode(p);
    if(q) printNode(q);
    if(res) printNode(res);
    return 0;
}

void testSessionFirst() {
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
    
    
    // 1.7
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
    
    // 1.8
    string s1 = "apple";
    string s2 = "pleap";
    cout<<isRotation(s1, s2)<<endl;
#endif
}