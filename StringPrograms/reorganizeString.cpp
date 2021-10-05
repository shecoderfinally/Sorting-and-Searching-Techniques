#include <bits/stdc++.h>
using namespace std;

#define MAX_CHARS 26

struct Key
{
    int freq;
    char ch;

    // function for priority_queue to store Key
    // according to freq
    bool operator<(const Key& k) const
    {
        return freq < k.freq;
    }
};

string reorganizeString(string str)
{
    int n=str.length();
    int count[MAX_CHARS]={0}; // initialize the array with 0's
    
    for(int i=0;i<n;i++)
        count[str[i]-'a']++; // calculate the count of all the chars present in the string.
    
    priority_queue<Key> pq; // initialize the priority queue.

    for(char ch='a';ch<='z';ch++)
        if(count[ch-'a'])
            pq.push(Key{count[ch-'a'], ch}); // push the freqs and counts to priority queue.
    
    string result=""; // result string
    Key prev{-1, '#' }; // initializing with dummy value.
    while(!pq.empty())
    {
        Key k = pq.top(); // take out the top element
        pq.pop();

        result += k.ch; // add the result to the string.

        if(prev.freq>0) // if the frequency of prev is >0 then add it to the string prev here means the char that is recently removed.
            pq.push(prev);
        
        k.freq--; // decrement the count of char that has been added to the string.

        prev=k; // now this has been already added to string so for next iteration this becomes prev and the one present on top of pq will be "k".
    }
    if(result.length()==str.length())
        return result;
    
    return "";
}

int main()
{
    string str="bbbaa";
    cout<<reorganizeString(str)<<"\n";
}