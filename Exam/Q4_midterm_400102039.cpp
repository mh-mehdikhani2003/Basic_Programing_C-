#include <iostream>
using namespace std;
int main()
{
    long long int gavab=0,sum=0;
    char n='1';
    int c=2;
    while (n!='c')
    {
        cin>>n;
        if(n!='+'&& n!='-')
        {
                sum*=10;
                sum+=n-'0';
        }
        if(n=='+')
        {
            if(c==2)
             {
                 gavab+=sum;
             }
            
                if(c==1)
                {
                    gavab+=sum;
                }
                   if(c==0)
                {
                    gavab-=sum;
                }
                c=1;
                sum=0;

        }

        if(n=='-')
        {
             if(c==2)
             {
                 gavab+=sum;
             }
                if(c==1)
                {
                    gavab+=sum;
                }
                   if(c==0)
                {
                    gavab-=sum;
                }
                c=0;
                sum=0;
        }
    }
    cout<<gavab;
    
    return 0;
}