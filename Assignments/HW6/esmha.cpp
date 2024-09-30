#include <iostream>
using namespace std;
int tedadharf (string x,int length)
{
    char A[length];
    int shmarande=0;
    for(int i=0;i<length;i++)
    {
        A[i]='0';
    }
    for(int i=0;i<length;i++)
    {
        A[i]=x[i];
    }
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<x.length() && j!=i;j++)
        {
            if(A[i]==A[j]){A[i]='0';}
        }
    }
    for(int i=0;i<length;i++)
    {
        if(A[i]!='0'){shmarande++;}
    }
    return (shmarande);
}
int main()
{
    int n;string x;
    cin>>n;
    int tedad[n],j=0;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        tedad[j]=tedadharf(x,x.length());j++;
    }

    int max=tedad[0];
    for(int i=1;i<n;i++)
    {
        if(max<tedad[i])
        {
            max=tedad[i];
        }
    }
    cout<<max;
    return 0;



}
