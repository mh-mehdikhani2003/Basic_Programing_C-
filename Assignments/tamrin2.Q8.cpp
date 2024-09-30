#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double sum=0,zarb=0,n=0,e=0,h=0;
    while(n!=-1)
    {
        cin>>n;
        if(n!=-1){
        zarb=zarb+n*n;
        sum=sum+n;
        h++;
        }
    }
    e=(zarb/h)-(sum/h)*(sum/h);
    cout<<fixed<<setprecision(2)<<e;
    return 0;
}
