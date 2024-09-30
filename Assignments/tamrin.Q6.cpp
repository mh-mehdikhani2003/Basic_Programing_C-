#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,i,b=0,temp,h=0;
    cin>>n>>i;
    if(n/10==0)
    {
        temp=i;
        i=n;
        n=temp;
    }
    temp=n;
    while(n/10!=0)
    {
        n=n/10;
        b++;
    }
    n=temp;
    b++;
    int a[b];
    for(int z=0;z<b;z++)
    {
        a[z]=n%10;
        n=n/10;
        if (a[z]!=i)
            h++;
    }
    if(h==0)
        cout<<h-1;
    int w[h],z=0;
    for(int x=0;x<h;x++)
    {
        while(a[z]==i)
        {
            z++;
        }
        w[x]=a[z];
        z++;
    }
    int sum=0;
    for(int x=0;x<h;x++)
        sum=sum+w[x]*((int)pow(10,x));
    cout<<sum;
}
