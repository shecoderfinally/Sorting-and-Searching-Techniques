// Problem link : https://codeforces.com/contest/1530/problem/B
// Codeforce Round #733 
// Problem B : Putting Plates
// Solution :

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define F(i, a, b) for (long long i = a; i < b; i++)
#define RF(i, a, b) for (long long i = a; i >= b; i--)
#define pb push_back

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);        
    
    int test_case = 1;
    cin >> test_case;     
    while (test_case--){
 
        int n,m;
        cin>>n>>m;
 
        int b[n][m];
        F(i,0,n)
            F(j,0,m)
                b[i][j]=0;
 
        int dx[8]={1,-1,-1,1,-1,1,0,0};
        int dy[8]={1,-1,1,-1,0,0,-1,1};
         
        for(int i=0;i<m;i+=2){
            b[0][i]=1;
        }
 
        for(int i=0;i<n;i+=2){
            b[i][0]=1;
        }
 
        for(int i=2;i<n;i+=2){
            int f=0;        
            F(k,0,8)
                if(b[i+dx[k]][m-1+dy[k]]==1 && i+dx[k]>=0 && i+dx[k]<n && m-1+dy[k]>=0 && m-1+dy[k]<m)
                    {f=1;break;}
            if(f==0)
                b[i][m-1]=1;
        }
 
        for(int i=2;i<m;i+=2){
            int f=0;
            F(k,0,8){
                // cout<<n-1+dx[k]<<' '<<i+dy[k]<<'\n';
                if(b[n-1+dx[k]][i+dy[k]]==1 && n-1+dx[k]>=0 && n-1+dx[k]<n && i+dy[k]>=0 && i+dy[k]<m)
                        {f=1;break;}
            }
            if(f==0)
                b[n-1][i]=1;
        }         
 
        F(i,0,n){
            F(j,0,m){
                cout<<b[i][j];
            }
            cout<<'\n';
        }            
        cout<<'\n';
    }    
 
}