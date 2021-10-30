#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
       long long int r, b, d;
       cin >> r >> b >> d;
       if (r > b)
            swap(r, b);
            
       cout << (r + r * d >= b ? "YES" : "NO") << endl;
    }
    
        
}
