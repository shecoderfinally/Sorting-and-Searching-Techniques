#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;

    cin>>t;
    int count;
    while(t--)
    {
        cin>>n;
        
        while(n > 100)
        {
            count = n / 100;
            n = n % 100; 
            //cout<<count<<" "<<n<<endl;  
        }
        while (n >= 50)
        {
            count += 1;
            n = n - 50;

        }
        while (n >= 10 and n < 50)
        {
            count += 1;
            n = n - 10;
            //cout<<count<<" "<<n<<endl;
                
        }
        while (n >= 5 and n < 10)
        {
            count += 1;
            n = n - 5;
            //cout<<count<<" "<<n<<endl;
        }
        while (n >= 2 and n < 5)
        {
            count += 1;
            n = n - 2;
            //cout<<count<<" "<<n<<endl;
        }
        while (n > 0 and n <= 1)
        {
            count += 1;
            n = n - 1;
        }
        
        cout<<count<<endl;
    }
    //cout<<count<<endl;
    
}