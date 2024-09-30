#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n][n];
    long long int n2=1;
    for(int j=n-1;j>=0;j--)
    {
        for(int i=0;i<n;i++)
        {
            A[i][j]=n2;
            n2+=2;
        }
    }

    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(i==n-1){cout<<A[j][i];}
            else{
            cout<<A[j][i]<<" ";
            }
            
        }
        cout<<"\n";
    }
    return 0;
}