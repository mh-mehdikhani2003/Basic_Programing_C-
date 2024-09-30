#include <iostream>
using namespace std;
int main()
{
    long long int a,n,m,help1=0;
    cin>>a>>n>>m;
    help1=a%m;
    a=help1;
    for (long long int j=1;j<n;j++)
    {
        help1*=a;
        help1=help1%m;
    }

    cout<<help1;
    return 0;
}