#include <iostream>
using namespace std;
int main()
{
    long long int n,h=0;
    cin>>n;
    while (n!=0)
    {
        n=n/10;h++;
    }
    cout<<h;
    return 0;
}