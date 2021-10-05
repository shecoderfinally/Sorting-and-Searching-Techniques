
#include <iostream>
#define pi 3.14

using namespace std;
float area(float radius)
{
    return pi*radius*radius;
}
int area(int lenght,int breadth)
{
    return lenght*breadth;
}
float area(float base,float height)
{
    return 0.5*base*height;
}

int main()
{
    int length,breadth;
    float radius,base,height;
    
    cout<<"Area of Circle"<<endl;
    cout<<"Enter Radius"<<endl;
    cin>>radius;
    cout<<"Area of Circle "<<area(radius)<<endl<<endl;
    
    cout<<"Area of Rectangle"<<endl;
    cout<<"Enter Length and breadth"<<endl;
    cin>>length>>breadth;
    cout<<"Area of Rectangle "<<area(length,breadth)<<endl<<endl;
    
    cout<<"Area of Triangle"<<endl;
    cout<<"Enter Base and Height"<<endl;
    cin>>base>>height;
    cout<<"Area of Triangle "<<area(base,height)<<endl;

    return 0;
}