#include <iostream>
using namespace std;
int i=0;
void space (int n)
{
    for(int p=1;p<=n;p++)
    {
        cout<<" ";
    }
    return;
}
void tolid_setare (int n,int i)
{
    
    cout<<(char)92;
    for(int p=1;p<=2*(n-i);p++)
    {
        cout<<"*";
    }
    cout<<"\n";
    for(int j=2*(n-i)-1;j>0;j-- )
    {
        space(j-1);
        cout<<(char)92<<"*"<<"\n";
    }
    i++;
    if(i<n)
    {
     tolid_setare(n,i);   
    }
    
}
int main()
{
    int n;
    cin>>n;
    if(n==0){return 0;}
    tolid_setare(n,i);
    return 0;
}