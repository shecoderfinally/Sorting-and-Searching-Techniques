#include <bits/stdc++.h> 
#include<climits>
#include<cmath>
#include <iomanip>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        long long int a[n];
        
        for(int i =0; i < n; i++){
            cin >> a[i];
            //sum += a[i];
        }
        
        sort(a,a+n);
        long double sum = 0;
        for(int i = k ; i < n - k; i++){
            //cout << a[i] << " ";
            sum += a[i];
        }
        
        long double ans = sum/(n - 2 * k);
        cout << fixed << setprecision(6) << ans <<endl;
    }
    
    return 0;
}    
