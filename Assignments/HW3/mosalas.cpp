#include <iostream>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int b=1;b<=((2*(i-1))-1);b++)
        {
            cout<<" ";
        }
        if(i!=1)
        {
          cout<<"*";  
        }
        cout<<"\n";
    }
    while(n>0)
    {
        cout<<"*"<<" ";
        n--;
    }
    return 0;
}