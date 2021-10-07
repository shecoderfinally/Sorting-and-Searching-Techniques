// Problem Link: https://codeforces.com/contest/1559/problem/D1

#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define F(i, a, b) for (long long i = a; i < b; i++)
#define RF(i, a, b) for (long long i = a; i >= b; i--)
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define vpii vector<pair<int, int>>
#define vi vector<int>
#define pii pair<int, int>


int find_set(int v,int parent[]) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v],parent);
}

void union_sets(int a, int b,int size[],int parent[]) {
    a = find_set(a,parent);
    b = find_set(b,parent);
    if (a != b) {
        if (size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case = 1;
  //  cin >> test_case;
    while (test_case--)
    {
        int n,m1,m2;
        cin >> n >> m1 >> m2;
        int sz1[n+1], sz2[n+1],par1[n+1],par2[n+1];
        F(i,1,n+1){
            par1[i] = i;
            par2[i] = i;
            sz1[i] = 1;
            sz2[i] = 1;
        }

        F(i,0,m1){
            int u,v;
            cin >> u >> v;
            union_sets(u,v,sz1,par1);
        }
        F(i,0,m2){
            int u,v;
            cin >> u >> v;
            union_sets(u,v,sz2,par2);
        }
        int ans = 0;
        vector<pii> v;
        F(i,1,n+1){
            F(j,i+1,n+1){
                if((find_set(i,par1) != find_set(j,par1)) && (find_set(i,par2) != find_set(j,par2))){
                    union_sets(i,j,sz1,par1);
                    union_sets(i,j,sz2,par2);
                    ans++;
                    v.pb({i,j});
                }
            }
        }

        cout << ans << endl;
        for(auto it:v){
            cout << it.ff << " " << it.ss << endl;
        }

    }
}
