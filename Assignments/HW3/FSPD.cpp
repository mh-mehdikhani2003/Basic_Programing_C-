#include <iostream>
#include <cmath>
using namespace std;
bool aval (long long int n)
{
    long long int c=1;
    for(long long int i=2;(i<=sqrt(n))&&(c==1);i++)
    {
        if(n%i==0)
            c=0;
    }
    return(c);
}
bool maghsoom (long long int n)
{
    long long int c=2;
    for(long long int i=2;i<=(n/2);i++)
    {
        if (n%i==0)
            c++;
    }
    if (15<=c)
        return true;
    else
        return (0);
}
bool square (long long int n)
{
    long long int x=sqrt(n);
    if (x*x==n)
        return (1);
    else
        return (0);
}
bool fib (long long int n)
{
    return (square((5*n*n)-4)||square((5*n*n)+4));
}
int main()
{
    long long int n=0;
    cin>>n;
    if(fib(n))
        cout<<"f";
    if(square(n))
        cout<<"s";
    if(aval(n))
        cout<<"p";
    if (maghsoom(n))
        cout<<"d";
    cout<<".";
    return 0;
}