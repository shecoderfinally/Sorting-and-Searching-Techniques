/*
    https://www.geeksforgeeks.org/smallest-window-contains-characters-string/
*/
#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    string findSubString(string str)
    {
        if (str.length() <= 1) // if length of string is <= 1 return the string itself.
            return str;
        
        int distinct_count=0; // total number of distinct characters in the string.
        unordered_set<char> s; 
        
        for(int i=0;i<str.length();i++) // put all the chars into set and take size of set.
            s.insert(str[i]);
        
        distinct_count=s.size(); // size of set will be distinct count.
        int min_len=INT_MAX, start=0, start_index=-1, count=0;
        // min_len: length of window.
        // start: starting position of the current window
        // start_index: startng position of min length window
        // count: #unique characters in the current window.
        
        int curr_count[256]={0}; // unique characters in the current window.

        for(int i=0;i<str.length();i++) // iterate through each character in the string.
        {
            curr_count[str[i]]++; // increment the count of this char
            
            if(curr_count[str[i]]==1) // if the count of this char in the window is 1 then incr the count of unique chars
                count++;
            
            if(count==distinct_count) // if count is distinct_count then 
            {
                while(curr_count[str[start]]>1) // if the current window has some chars which are repeated (more than once)
                {
                    if(curr_count[str[start]]>1) // then decrement the count
                        curr_count[str[start]]--;
                    
                    start++; // move the window. so start will also change.
                }
                
                if(min_len>i-start+1) // size of the current window is i-size+1.
                {
                    min_len=i-start+1; // if the size of current window is less than min_len then update the minimum length.
                    start_index=start; // start_index will also be changed to start of this window.
                }
            }
        }
        return str.substr(start_index, min_len); // return the substring.
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str).size() << endl;
    }
    return 0;
}