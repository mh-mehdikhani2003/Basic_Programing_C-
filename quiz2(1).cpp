#include <iostream>
using namespace std;
int main()
{
    long long int i,j,k,b;
    cin>>i>>j>>k;
    for(b=k+1;j>0;b++)
    {
        j--;
        if(b%i==0)
            j++;
    }
    cout<<b-1;
    return 0;
}
