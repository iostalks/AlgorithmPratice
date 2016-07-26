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

int main(int argc, const char * argv[]) {
    
#if 0
    // 1.1
    string s_1_1 = "abcde\nf\n";
    cout << isUnique1(s_1_1) << " " << isUnique2(s_1_1) << endl;

    
    // 1.2
    char s[] = "ddaeiouff";
    reverseVowel(s);
    cout << s << endl;
#endif
    
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
    
    return 0;
}
