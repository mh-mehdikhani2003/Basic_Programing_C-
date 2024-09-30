#include <iostream>
using namespace std;
int main()
{
    int a[3],temp;
    cin>>a[0]>>a[1]>>a[2];
    if(a[2]<a[1])
    {
        temp=a[2];
        a[2]=a[1];
        a[1]=temp;
    }
    if(a[2]<a[0])
    {
        temp=a[2];
        a[2]=a[0];
        a[0]=temp;
    }
    if (a[2]*a[2]==a[1]*a[1]+a[0]*a[0])
        cout<<"YES";
    else
        cout<<"NO";
}
