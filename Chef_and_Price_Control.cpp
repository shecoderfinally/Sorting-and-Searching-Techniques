// Problem Link : https://www.codechef.com/JUNE20B/problems/PRICECON
// Problem : Chef and Price Control
// Solution : 

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	long int T;
	cin>>T;
	while(T--)
	{
	    long int N,a,i,K,l=0;
	    cin>>N>>K;
	    for(i=1;i<=N;i++)
	    {
	        cin>>a;
	        l+=(a>K)?a-K:0;
	    }
	    cout<<l<<'\n';
	}
	return 0;
}
