#include <iostream>
using namespace std;
int main()
{
    unsigned long long int n=0;
    int b,h=0;
    cin>>n>>b;
    int a[31];
    if (n==0)
        cout<<0;
    while (n!=0)
    {
            a[h]=n%b;
            h++;
            n=n/b;           
    }
    for(int i=h-1;i>=0;i--)
    {
        if ((a[i]>=0)&&(a[i]<=9))
            cout<<a[i];
        if (a[i]==10)
            cout<<'A';
        if (a[i]==11)
            cout<<'B';
         if (a[i]==12)
            cout<<'C';
        if (a[i]==13)
            cout<<'D';
        if (a[i]==14)
            cout<<'E';
        if (a[i]==15)
            cout<<'F';
    }
    return 0;
}