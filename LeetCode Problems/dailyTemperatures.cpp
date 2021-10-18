//Leetcode problem link: https://leetcode.com/problems/daily-temperatures/
//approach is similar to finding next greater element in array

#include <bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) 
{
        stack<int> st;
        int n=temperatures.size();
        vector<int> ans(n,0);
        
        for(int i=0;i<n;i++)
        {
            if(st.empty() || temperatures[st.top()] >= temperatures[i])
                st.push(i);
            else
            {
                while(!st.empty() && temperatures[st.top()] < temperatures[i])
                {
                    ans[st.top()]=i-st.top();
                    st.pop();
                }
                st.push(i);
            }
        }
        
        return ans;
}

int main()
{
    int n;
    cin>>n;

    vector<int> temperatures(n);
    for(int i=0;i<n;i++)
    cin>>temperatures[i];

    vector<int> ans=dailyTemperatures(temperatures);

    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";

    return 0;
}