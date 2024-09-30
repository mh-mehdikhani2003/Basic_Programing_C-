#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int m,n,temp=0,t=-1,h=0,c=-1;
    cin>>m>>n;
    if(m>n)
    {
        temp=n;
        n=m;
        m=temp;
    }
    for(int i=m+1;i<n;i++)
    {
        if(i==1)
        {
            continue;
        }
        t=-1;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                t=1;
            }
        }
        if(t==-1)
        {
            cout<<i;
            h=1;
            break;
        }
    }
    if(h==0)
    {
        cout<<-1;
    }
    return 0;
}
