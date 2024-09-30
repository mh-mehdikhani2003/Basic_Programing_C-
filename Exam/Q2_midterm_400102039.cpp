#include <iostream>
void swap (long long int &a,long long int &b)
{
    int temp=a;a=b;b=temp;    
    
}
long long int kmm (long long int a,long long int b)
{
    if(b>a){
    long long int temp=a;a=b;b=temp;    
    }
   long long int  c=b;
   long long int d=a;
    while(b!=0)
    {
            a=a%b;
            swap(b,a);
    }
    return (d*(c/a));
}
using namespace std;
int main()
{
    int n;
    long long int h=2;
    cin>>n;
    if(n==1)
        cout<<1;
        if(n>=2){
             for(int i=2;i<=n;i++)
             {
                    h= kmm(i,h);
             }
        }
        cout<<h;
    return 0;
}