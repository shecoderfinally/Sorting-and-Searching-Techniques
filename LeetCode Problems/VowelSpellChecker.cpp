#include<bits/stdc++.h>

class Solution {
public:
    
    //Solution fron Discussions 
    vector<string> spellchecker(vector<string>& wordlist, vector<string> queries) {
        unordered_set<string> words(wordlist.begin(), wordlist.end());
        unordered_map<string, string> cap, vowel;
        for (string w : wordlist) {
            string lower = tolow(w), devowel = todev(w);
            cap.insert({lower, w});
            vowel.insert({devowel, w});
        }
        for (int i = 0; i < queries.size(); ++i) {
            if (words.count(queries[i])) continue;
            string lower = tolow(queries[i]), devowel = todev(queries[i]);
            if (cap.count(lower)) {
                queries[i] = cap[lower];
            } else if (vowel.count(devowel)) {
                queries[i] = vowel[devowel];
            } else {
                queries[i] = "";
            }
        }
        return queries;
    }

    string tolow(string w) {
        for (auto & c: w)
            c = tolower(c);
        return w;
    }

    string todev(string w) {
        w = tolow(w);
        for (auto & c: w)
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                c = '#';
        return w;
    }
};