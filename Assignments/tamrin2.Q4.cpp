#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,fak;
    float x,tav,e=1;
    cin>>n>>x;
    if (n==1){
        cout<<fixed<<setprecision(2)<<e;
        return 0;
    }
    for(int i=1;i<n;i++)
    {
        tav=1,fak=1;
        for(int b=1;b<=i;b++){
            fak=b*fak;
        }
        for (int j=1;j<=i;j++){
            tav=tav*x;
        }
       // cout<<fak<<"\n";
        //cout<<tav<<"\n";
        e=e+(tav/fak);
        //cout<<e;
    }
    cout<<fixed<<setprecision(2)<<e;
    return 0;
}
