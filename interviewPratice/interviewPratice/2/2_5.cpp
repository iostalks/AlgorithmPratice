//
//  2_5.cpp
//  interviewPratice
//
//  Created by Jone on 16/8/5.
//  Copyright © 2016年 Jone. All rights reserved.
//

#include "2_5.hpp"
#include <map>

map<node *, bool> hashTable;
node *loopstart(node *head) {
    while (head) {
        if (hashTable[head]) return head;
        else {
            hashTable[head] = true;
            head = head -> next;
        }
    }
    
    return head;
}

