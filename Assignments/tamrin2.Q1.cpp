#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a=0,j=31;
    cin>>a;
    if(a<0)
    {
        a=a*-1;
        a=a|(1<<31);
    }
    for(;j>=0;j--)
    {
        cout<<((a&(1<<j))?1:0);
    }
    return 0;
}
