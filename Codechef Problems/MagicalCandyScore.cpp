// problem link: https://www.codechef.com/problems/CNDYGAME
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll mod=1e9+7;

int main() {
	ios::sync_with_stdio(0);
	ll t;
	cin>>t;
	while(t--){
	int n;
    cin >> n;
    int a[n];
    int piece = 0, index = -1;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] == 1) {
        if (i == 0) {
          piece = 1;
        } else if (i != n - 1) {
          piece = 2;
          index = i;
        }
      }
    }
    
    
    if (piece == 1) {
      int q;
      cin >> q;
      while (q--) {
        ll r;
        cin >> r;
        int ans;
        if (r % n == 0) {
          ans = (r / n) % mod;
        } else {
          if (r % n == 1 && r > n) {
            ans = (r / n) % mod;

          } else {
            ans = (r / n + 1) % mod;
          }
        }
        cout << ans << endl;
      }
    } else if (piece == 2) {
      ll sum = 0, arr[100000];
      for (int i = 0; i < n - 1; i++) {
        if (i == index - 1) {
          if (a[i] % 2 == 0) {
            sum = sum + a[i] - 1;
            arr[i] = sum;
          } else {
            sum += a[i];
            arr[i] = sum;
          }
        } else {
          if (a[i] % 2 == 0) {
            sum += a[i];
            arr[i] = sum;
          } else {
            sum += a[i] - 1;
            arr[i] = sum;
          }
        }
      }
      if (a[n - 1] % 2 == 0) {
        sum += a[n - 1] - 1;
      } else {
        sum += a[n - 1];
      }
      int q;
      cin >> q;
      while (q--) {
        ll r;
        cin >> r;
        if (r % n == 0) {
          if (a[n - 1] % 2 == 0) {
            cout << ((r / n) * sum + 1) % mod;
          } else {
            cout << ((r / n) * sum) % mod;
          }
        } else {
          if (index == r % n - 1) {
            if (a[index - 1] % 2 == 0) {
              cout << ((r / n) * sum + 2 + arr[r % n - 1]) % mod;
            } else {
              cout << ((r / n) * sum + arr[r % n - 1]) % mod;
            }
          } else if (index - 1 == r % n - 1) {
            if (a[index - 1] % 2 == 0) {
              cout << ((r / n) * sum + arr[r % n - 1] + 1) % mod;
            } else {
              cout << ((r / n) * sum + arr[r % n - 1]) % mod;
            }
          } else {
            if (a[r % n - 1] % 2 != 0) {
              cout << ((r / n) * sum + arr[r % n - 1] + 1) % mod;
            } else {
              cout << ((r / n) * sum + arr[r % n - 1]) % mod;
            }
          }
        }
        cout << endl;
      }
    } else {
      ll sum = 0, arr[100000];
      for (int i = 0; i < n - 1; i++) {
        if (a[i] % 2 == 0) {
          sum += a[i];
          arr[i] = sum;
        } else {
          sum += a[i] - 1;
          arr[i] = sum;
        }
      }
      if (a[n - 1] % 2 == 0) {
        sum += a[n - 1] - 1;
      } else {
        sum += a[n - 1];
      }
      int q;
      cin >> q;
      while(q--) {
        ll r;
        cin >> r;
        if (r % n == 0) {
          if (a[n - 1] % 2 == 0) {
            cout << ((r / n) * sum + 1) % mod;
          } else {
            cout << ((r / n) * sum) % mod;
          }
        } else {
          if (a[r % n - 1] % 2 != 0) {
            cout << ((r / n) * sum + arr[r % n - 1] + 1) % mod;
          } else {
            cout << (((r / n) * sum + arr[r % n - 1]) % mod) + 1 - 1;
          }
        }
        cout << endl;
      }
    }
	}
	return 0;
}