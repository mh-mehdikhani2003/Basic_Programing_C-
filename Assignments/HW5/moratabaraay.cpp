#include <iostream>
using namespace std;

int main()
{
    long long int a[8],temp=0;
    for(int i=0;i<8;i++)
    {
        cin>>a[i];
    }
    for  (int j=0;j<8;j++)
    {
        for(int i=0;i<8;i++)
        {
            if(a[i]<a[i+1])
            {
                temp=a[i];a[i]=a[i+1];a[i+1]=temp;
            }
        }
    }
    for(int p=0;p<8;p++)
    {
        cout<<a[p]<<" ";
    }
    return 0;
}