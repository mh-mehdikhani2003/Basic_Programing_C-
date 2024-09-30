#include <iostream>
using namespace std;
int main()
{
    int m,n,x;
    cin>>m>>n>>x;
    int A[m][n],B [n][x];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           cin>> A[i][j];
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<x;j++)
        {
           cin>> B[i][j];
        }
    }
    int C[m][x];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<x;j++)
        {
            C[i][j]=0;
            for(int p=0;p<n;p++)
            {
                C[i][j]+=A[i][p]*B[p][j];
            }

        }

    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<x;j++)
        {
           cout<< C[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}