#include <iostream>
# include <string>
using namespace std;
int main()
{
    long long int n,sum=0;
    cin>>n;
    string x;
    for (int i=1;i<=n;i++)
    {
        cin>>x;
        for (int j=0;j<x.size();j++)
        {
            sum=(x.at(j)-48)+sum;
        }
    }
    cout<<sum;
    return 0;
}