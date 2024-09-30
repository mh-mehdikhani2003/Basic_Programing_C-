#include <iostream>
using namespace std;
long long int tedad_khat (int n)
{
    if(n==0){return 0;}
    if(n==1){return 1;}
    if(n>=2  && n<=4){return ((n*n)+tedad_khat(n-1)+tedad_khat(n-2));}
    if(n>=5  && n<=19){return ((2*n*n)+tedad_khat(n-1)+tedad_khat(n-2));}
    else
    {
        return -1;
    }
}
int main()
{
    int n;
    cin>>n;
    long long int gavab=tedad_khat(n);
    if(gavab==-1){cout<<"che khabare";}
    else{
        cout<<gavab;
    }
    return 0;
}