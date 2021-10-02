#include <iostream>
#include<cmath>
#include<climits>
#include <algorithm> 

using namespace std;

long long int t;
int main() {
	cin >> t;
	for(int i9 = 0; i9 < t; i9++){
	    int n;
	    cin >> n;
	    int c1[n], c2[n], c3[n], d1[n], d2[n], d3[n];
	    int j1 = 0, j2 = 0, j3 = 0;
 	    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
	    for(int i = 0 ; i < n ; i++){
	        int ci, le, di;
	        cin >> ci >> le >> di;
	        //cout << ci << " " << le << " " << di << endl;
	        if(le == 1){
	            if (max1 < di){
	                max1 = di;
	            }
	            c1[j1] = ci;
	            d1[j1] = di;
	            j1++;
	        }
	        else if( le == 2){
	            if (max2 < di){
	                max2 = di;
	            }
	            c2[j2] = ci;
	            d2[j2] = di;
	            j2++;
	        }
	        else {
	            if (max3 < di){
	                max3 = di;
	            }
	            c3[j3] = ci;
	            d3[j3] = di;
	            j3++;
	        }
	    }
	    int x = 0, y = 0, z = 0;
	    int ans1[n], ans2[n], ans3[n];
	    for(int i = 0; i < j1; i++){
	        if (d1[i] == max1){
	           ans1[x] = c1[i];
	            x++;
	        }
	        
	    }
	    int* a1;
	    a1 = min_element(ans1, ans1 + x);
	    cout << max1 << " " << *a1 << endl;
	    for(int i = 0; i < j2; i++){
	        if (d2[i] == max2){
	            ans2[y] = c2[i];
	            y++;
	        }
	        
	    }
	    int* a2;
	    a2 = min_element(ans2, ans2 + y);
	    cout << max2 << " " << *a2 << endl;
	    for(int i = 0; i < j3; i++){
	        if (d3[i] == max3){
	            ans3[z] = c3[i];
	            z++;
	        }
	        
	    }
	    int* a3;
	    a3 = min_element(ans3, ans3 + z);
	    cout << max3 << " " << *a3 << endl;
	}
	return 0;
}
