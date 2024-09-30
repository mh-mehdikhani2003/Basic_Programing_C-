#include <iostream>
using namespace std;
int main()
{
    int m,n,x,b,temp;
    cin>>n>>m>>x;
    if(m>n)
    {
        temp=m;
        m=n;
        n=temp;
    }

    for(b=n;b>=m;b--)
    {
        if(b%x==0)
        {
            cout<<b<<"\n";
        }
    }
    return 0;
}
