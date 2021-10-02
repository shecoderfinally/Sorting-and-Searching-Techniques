//HackerRank Problem : Simple Text Editor -> https://www.hackerrank.com/challenges/simple-text-editor/problem
/*Implement a simple text editor. The editor initially contains an empty string S . Perform Q operations of the following 4 types:

   1. append - Append string to the end of
.
   2. delete - Delete the last k characters of the string.

   3. print - Print the kth character of string.
.
   4. undo - Undo the last (not previously undone) operation of type 1 or 2 , reverting S to the state it was in prior to that operation. */


#include <bits/stdc++.h>
using namespace std;


int main() {
    //Fast Input/Output 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ;
    //Enter Q queries
    int q ; 
    cin >> q ; 
    // Stack to store history 
    stack<string> s ; 
    
    //initial string
    string str = ""; 
    int choice = 0 ;
    while(q--){
        //int choice = 0 ; 
        cin >> choice  ; 
        
        switch(choice){
            case 1 : { s.push(str) ;
                string W ; 
                cin >> W ;
                str.append(W) ;
                //cout << str << "debug" << endl ; 
                //s.push(str)
                break ; 
            }
            case 2 :{ s.push(str);
                int k ; 
                cin >> k ; 
                if(str.size())
                    str.erase(str.size() - k);
                //cout << str << "debug" << endl ; 
                break ; 
            }
            case 3 : { int k  ; 
                cin >> k ; 
                if(str.size() >= k )
                    cout << str[k-1] << endl ;
                //cout << str << "  " << k << "debug" << endl ; 
                break ;
            } 
            case 4 :{ str = s.top();
                s.pop();
                //cout << str << "debug" << endl ; 
                break ;
            } 
            default : cout << "Invalid Operation" << endl ; 
                break ;
            
        }
    }
     
    return 0;
}
