#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
    double n=1,w,N=0,sum=0;
    while(n!=0)
    {
        cin>>n;
        if(n!=0)
        {
            cin>>w;
            sum=n*w+sum;
            N=N+w;
        }

    }
    cout<<fixed<<setprecision(3)<<sum/N;
    return 0;
}
