class Solution {
public:
    bool isAnagram(string s, string t) {
      unordered_map<char,int>mp;
        for(char i:s)
            mp[i]++;
          for(char i:t)
            mp[i]--;
        for(auto it=mp.begin();it!=mp.end();it++)
        if(it->second!=0)return false;
        return true;
        
    }
};
