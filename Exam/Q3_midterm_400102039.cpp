#include <iostream>
using namespace std;
int main()
{
    long long int sum=0,n,h=0,i=1;
    cin>>n;
    while (true)
    {
        h=0;
        sum+=i;
        i++;
        for(long long int j=1;j<=(sum/2);j++)
        {
            if(sum%j==0)
                h++;
        }
        h++;
        if(h==n+1)
            break;
    }
    cout<<sum;
    return 0;
}