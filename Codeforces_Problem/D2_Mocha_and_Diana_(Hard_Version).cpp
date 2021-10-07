// Problem link: https://codeforces.com/contest/1559/problem/D2
// Contest: #738, Problem D2: Mocha and Diana (Hard Version)

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
#define pii pair<int, int>

class DSU
{
public:
    int n;
    vi p;
    vi sz;
    DSU(int N)
    {
        n = N;
        p.assign(n + 1, -1);
        sz.assign(n + 1, 1);
        for (int i = 0; i <= n; i++)
            p[i] = i;
    }
    int find_set(int i)
    {
        if (p[i] == i)
            return i;
        return p[i] = find_set(p[i]);
    }
    void union_set(int a, int b)
    {
        a = find_set(a);
        b = find_set(b);
        if (a != b)
        {
            if (sz[a] < sz[b])
                swap(a, b);
            p[b] = a;
            sz[a] += sz[b];
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case = 1;
    //  cin >> test_case;
    while (test_case--)
    {
        int n, m1, m2;
        cin >> n >> m1 >> m2;
        DSU d1(n+1),d2(n+1);

        F(i, 0, m1)
        {
            int u, v;
            cin >> u >> v;
            d1.union_set(u, v);
        }

        F(i, 0, m2)
        {
            int u, v;
            cin >> u >> v;
            d2.union_set(u, v);
        }
        ll ans = 0;
        vector<pii> v;
        F(i, 2, n + 1)
        {
            if ((d1.find_set(i) != d1.find_set(1)) && (d2.find_set(i) != d2.find_set(1)))
            {
                d1.union_set(i, 1);
                d2.union_set(i, 1);
                ans++;
                //cout << "1 " << i << endl;
                v.pb({1, i});
            }
        }
        ll l = 1, r = 1;
        while (l <= n && r <= n)
        {
            //cout << l << " " << r << endl;
            while (l <= n && d1.find_set(l) == d1.find_set(1))
                l++;
            while (r <= n && d2.find_set(r) == d2.find_set(1))
                r++;
            if (l > n || r > n)
                break;
            ans++;
            v.pb({l, r});
            d1.union_set(l,r);
            d2.union_set(l,r);
        }
        cout << ans << endl;
        for (auto it : v)
        {
            cout << it.ff << " " << it.ss << endl;
        }
    }
}
