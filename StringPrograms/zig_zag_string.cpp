// The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

// P.......A........H.......N
// ..A..P....L....S....I...I....G
// ....Y.........I........R
// And then read line by line: PAHNAPLSIIGYIR
// Write the code that will take a string and make this conversion given a number of rows:

// string convert(string text, int nRows);
// convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR"
// **Example 2 : **
// ABCD, 2 can be written as

// A....C
// ...B....D
// and hence the answer would be ACBD.


// Solution :

#include<bits/stdc++.h>
using namespace std;

string convert(string A, int B) {
 
    if(B==1)
        return A;
    if(A.length()==1)
        return A;
    string s=A;
    int n=A.length();
    vector<char>v;
    int f=0;
    int jp1=((B*2)-3)-2,jp2=1;
    int first=((B*2)-3);
    for(int t=1;t<=B;t++){
        
        if(t==1||t==B){
            int j=t-1;
            while(j<s.length()){
                v.push_back(s[j]);
                j+=first+1;
            }
        }
        
        if(t!=1 && t!=B){
                
            int j=t-1;f=0;
            while(j<s.length()){
                    
                if(f==0){
                    v.push_back(s[j]);
                    f=1;
                    j+=jp1+1;
                }else{
                    f=0;
                    v.push_back(s[j]);
                    j+=jp2+1;
                }
                        
            }
            jp1-=2;
            jp2+=2;
                
        }
        
    }
    string ans="";
    for(auto x:v)
        ans+=x;
    return ans;   
    
}

int main(){

    string s;
    int n;
    cin >> n;
    cin >> s;
    cout << convert(s,n);    

}