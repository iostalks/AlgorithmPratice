//
//  2_3.cpp
//  interviewPratice
//
//  Created by Jone on 16/8/3.
//  Copyright © 2016年 Jone. All rights reserved.
//

//原文：
//
//Implement an algorithm to delete a node in the middle of a single linked list, given only access to that node.
//
//EXAMPLE
//
//Input: the node ‘c’ from the linked list a->b->c->d->e Result: nothing is returned, but the new linked list looks like a->b->d->e
//
//译文：
//
//实现一个算法来删除单链表中间的一个结点，只给出指向那个结点的指针。
//
//例子：
//
//输入：指向链表a->b->c->d->e中结点c的指针
//
//结果：不需要返回什么，得到一个新链表：a->b->d->e


#include "2_3.hpp"

// 1. 位于头部。  2. 位于中间。 3.位于尾部(不处理)。 3. 链表为空。
bool deleteOneNode(node *nd) {
    if (nd == NULL && nd -> next == NULL) return false;
//    if (nd -> next == NULL) { // 无法删除链表的最后一个元素
//        delete nd;
//        
//        return true;
//    }
    
    node *np = nd -> next;
    nd -> next = np -> next;
    nd -> data = np -> data;
    delete np;
    
    return true;
}