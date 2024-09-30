#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int h=0;
    char SB=0;
    long double deposit=0,M=0;
    cin>>h>>deposit;
    for (int i=h;i>0;i--)
    {
        cin>>SB;
        if(SB==66)
        {
            cin>>M; 
            deposit=deposit-M;
        }
        if(SB==83)
        {
            cin>>M;
            deposit=deposit+M;
        }
        M=0;
    }
    if (deposit-(int)deposit>0)
        cout<<fixed<<setprecision(3)<<deposit;
    else
        cout<<deposit;
    return 0;
}