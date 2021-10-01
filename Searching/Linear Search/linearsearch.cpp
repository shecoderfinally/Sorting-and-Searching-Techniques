#include <iostream>
using namespace std;
int main()
{
    int n,key;
    bool found=false;
    cout<<"Enter the size of array and key\n";
    cin>>n>>key;
    int arr[n];
    cout<<"Enter the elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Element is found at "<<i+1<<"th position";
            found=true;  //if element is found in the array
            break;
        }
    }
    if(!found)
    {
        cout<<"Element is not in the array";
    }
    
return 0;
}
