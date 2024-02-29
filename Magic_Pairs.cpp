#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    float d;
    cin>>a;
    b=(a*a)/2;
    d=(a*a)/2.0;
    c=d;
    if(a%2==0)
    cout<<b<<endl;
    else
    cout<<c<<endl;
}
