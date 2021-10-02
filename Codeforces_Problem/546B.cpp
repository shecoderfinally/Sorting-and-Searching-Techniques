#include <bits/stdc++.h>
using namespace std;

// Luvdipsingh Dadiyala

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
	int n, elm;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> elm;
		v.push_back(elm);
	}
	sort(v.begin(), v.end());
	set<int> S;
	int res = 0;
	int mnnum = -1;
	for (int i = 0; i < n; ++i) {
		if (v[i] < mnnum || (S.find(v[i]) != S.end())) {
			res += (mnnum - v[i]);
			S.insert(mnnum);
			++mnnum;
		} else {
			S.insert(v[i]);
			mnnum = v[i] + 1;
		}
	}
	cout << res;
	return 0;
}