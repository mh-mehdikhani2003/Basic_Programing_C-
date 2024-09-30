#include <iostream>
using namespace std;
int tool (int n)
{
    if(n==1)
        return(0);
    if (n%2!=0)
     return (tool(n-1));
    if (n%2==0)
    {
        if(n%4==0)
        {
            return(tool(n-1)-n/2);
        }
        if(n%4!=0)
        {
            return(tool(n-1)+n/2);
        }
    }
}
int arz (int n)
{
    if(n==1)
        return(0);
    if (n%2==0)
        return(arz(n-1));
    if (n%2!=0)
    {
        if((n-1)%4!=0)
        {
            return(arz(n-1)+(n-1)/2);
        }
        if((n-1)%4==0)
        {
            return(arz(n-1)-(n-1)/2);
        }
    }
}
int main()
{
    int n=0;
    cin>>n;
    cout<<tool(n)<<" "<<arz(n);
    return 0;
}