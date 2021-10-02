// Problem Link : https://www.codechef.com/COOK131B/problems/CHFPLN/
// Problem : Chef in infinite plates
// July cook-off 2021
// Solution : 

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define F(i, a, b) for (long long i = a; i < b; i++)
#define RF(i, a, b) for (long long i = a; i >= b; i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);        
    
    int test_case = 1;
    cin >> test_case;     
    while (test_case--){

        int n;
        cin>>n;
        int a[n];
        map<int,int>mp;
        F(i,0,n){        
            cin>>a[i]; 
            mp[a[i]]++;
        }
        int cnt=0;
        for(auto x:mp){
            cnt+=min(x.second,x.first-1);
        }
        cout<<cnt<<'\n';

    }

}