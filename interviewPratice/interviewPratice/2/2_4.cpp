//
//  2_4.cpp
//  interviewPratice
//
//  Created by Jone on 16/8/4.
//  Copyright © 2016年 Jone. All rights reserved.
//

//原文：
//
//You have two numbers represented by a linked list, where each node contains a single digit. The digits are stored in reverse order, such that the 1’s digit is at the head of the list. Write a function that adds the two numbers and returns the sum as a linked list.
//
//EXAMPLE
//
//Input: (3 -> 1 -> 5), (5 -> 9 -> 2)
//
//Output: 8 -> 0 -> 8
//
//译文：
//
//你有两个由单链表表示的数。每个结点代表其中的一位数字。数字的存储是逆序的， 也就是说个位位于链表的表头。写一函数使这两个数相加并返回结果，结果也由链表表示。
//
//例子：(3 -> 1 -> 5), (5 -> 9 -> 2)
//
//输入：8 -> 0 -> 8

#include "2_4.hpp"

//1.链表为空。2.有进位。3.链表长度不一样
node *addLink(node *p, node *q) {
    if (p == NULL) return q;
    if (q == NULL) return p;
    node *res = NULL, *pre = NULL;
    int c = 0;
    while (p && q) {
        int t = p -> data + q -> data + c;
        node *nd = new node();
        nd -> data = t%10;
        if (pre) {
            pre -> next = nd;
            pre = nd;
        } else {
            pre = res = nd;
        }
        c = t / 10;
        p = p -> next; q = q -> next;
    }
    
    while (p) {
        int t = p -> data + c;
        node *nd = new node();
        nd -> data = t % 10;
        pre -> next = nd;
        pre = nd;
        c = t / 10;
        p = p -> next;
    }
    
    while (q) {
        int t = q -> data + c;
        node *nd = new node();
        nd -> data = t % 10;
        pre -> next = nd;
        pre = nd;
        c = t / 10;
        p = p -> next;
    }
    
    // 当链表一样长又有进位
    if (c > 0) {
        node *nd = new node();
        nd -> data = c;
        pre -> next = nd;
    }
    
    return res;
}
