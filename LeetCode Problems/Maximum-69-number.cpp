#include <bits/stdc++.h>
#include "string.h"
class Solution {
public:
    int maximum69Number (int num) {
        string s_num = to_string(num);
        for (auto &c : s_num) {
            if (c == '6') {
                c = '9';
                break;
            }
        }
        return stoi(s_num);
    }
};