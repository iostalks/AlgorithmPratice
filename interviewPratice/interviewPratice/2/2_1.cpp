//
//  2_1.cpp
//  interviewPratice
//
//  Created by Jone on 16/8/1.
//  Copyright © 2016年 Jone. All rights reserved.
//

//原文：
//
//Write code to remove duplicates from an unsorted linked list.
//
//FOLLOW UP
//
//How would you solve this problem if a temporary buffer is not allowed?
//
//译文：
//
//从一个未排序的链表中移除重复的项
//
//进一步地，
//
//如果不允许使用临时的缓存，你如何解决这个问题？

#include "2_1.hpp"



bool hash_table[100];

void removeDumplicateNode0(node *head) {
    if (!head) return;
    node *p = head;
    node *q = p -> next;
    hash_table[head->data] = true;
    while (q) {
        if (hash_table[q->data]) {
            node *t = q;
            p -> next = q -> next;
            q = p -> next;
            delete t;
        } else {
            hash_table[q->data] = true;
            p = q;
            q = q -> next;
        }
    }
}

void removeDumplicateNode1(node *head) {
    if (!head) return;
    node *p, *q, *c = head;
    while (c) {
        p = c; q = c -> next;
        int d = c -> data;
        while (q) {
            if (d == q -> data) {
                node *t = q;
                p -> next = q -> next;
                q = p -> next;
                delete t;
            } else {
                p = q;
                q = q -> next;
                
            }
        }
        c = c -> next;
    }
}