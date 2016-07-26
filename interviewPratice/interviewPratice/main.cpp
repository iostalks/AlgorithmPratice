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

int main(int argc, const char * argv[]) {
    
#if 0
    // 1.1
    string s_1_1 = "abcde\nf\n";
    cout << isUnique1(s_1_1) << " " << isUnique2(s_1_1) << endl;
#endif
    
    // 1.2
    char s[] = "ddaeiouff";
    reverseVowel(s);
    cout << s << endl;
    
    return 0;
}
