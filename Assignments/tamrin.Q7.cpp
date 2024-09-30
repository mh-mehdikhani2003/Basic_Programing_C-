#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int n,c,b,tavan=0;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        tavan=0;
        for(b=2;(b<=sqrt(i))&&(c==0);b++)
        {
            if(i%b==0)
                c=1;
        }
        if(c==0)
        {
            while(n%i==0)
            {
                tavan++;
                n=n/i;
            }
            if(tavan != 0){
                cout<<i<<"\t"<<tavan<<"\n";
            }
        }
        if(c==1)
        {
            c=0;
        }
    }
    return 0;
}
