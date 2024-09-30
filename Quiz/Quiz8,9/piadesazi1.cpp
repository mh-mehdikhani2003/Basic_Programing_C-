#include <iostream>
using namespace std;
long long int H_max (long long int A[],int i)
{
    long long int max;
    if(i==0){return A[0];}
    else
    {
        max=H_max(A,i-1);
        if(max<A[i]){return A[i];}
        else
        {
            return max;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    long long int buildings[n];
    for(int i=0;i<n;i++)
    {
        cin>>buildings[i];
    }
    long long int h=H_max(buildings,n-1);
    for(int i=0;i<n;i++)
    {
        if(h==buildings[i]){cout<<i+1;break;}
    }
    return 0;
}