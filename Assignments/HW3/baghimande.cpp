#include <iostream>
using namespace std;
int main()
{
    long long int n,h=0;
    int c=2,f=3,a;
    cin>>n;
    if (n==0)
        return 0;
    for(long long int i=1;i<=n;i++)
    {
        cin>>a;        
        if(a==1)
            f=1;
        if(a==0)
            f=3;         
        if((f==1)&&(c==0))
            h++;
        if(a==0)
            c=0;
        if(a==1)
            c=2;
        if((i==n)&&(a==0))
            h++;
    }
    if(h==0)
        cout<<0;
    if(h==1)
        cout<<1;
    if(h>=2)
        cout<<2;
    return 0;
}