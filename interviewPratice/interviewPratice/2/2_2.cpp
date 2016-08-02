//
//  2_2.cpp
//  interviewPratice
//
//  Created by Jone on 16/8/2.
//  Copyright © 2016年 Jone. All rights reserved.
//

//原文：
//
//Implement an algorithm to find the nth to last element of a singly linked list.
//
//译文：
//
//实现一个算法从一个单链表中返回倒数第n个元素。



#include "2_2.hpp"

/**
 栈
 */
node *p;
int nn;
void findNthLast(node *head) {
    if (head == NULL) return;
    findNthLast(head->next);
    if (nn == 1) p = head;
    --nn;
}

node *findNthToLast0(node *head, int nth) {
    if (head == NULL || nth < 1) return NULL;
    node *p = head, *q = head;
    int c = 0;
    while (q) {
        ++c;
        q = q -> next;
    }
    
    for (int i = 0; i < c - nth; ++i) {
        p = p -> next;
    }
    return p;
}


node *findNthToLast1(node *head, int nth) {
    if (head == NULL || nth < 1) return NULL;
    node *p = head, *q = head;
    while (nth && p) {
        p = p -> next;
        --nth;
    }
    
    if (nth > 0) return NULL;
    while (p) {
        p = p -> next;
        q = q -> next;
    }
    return q;
}

