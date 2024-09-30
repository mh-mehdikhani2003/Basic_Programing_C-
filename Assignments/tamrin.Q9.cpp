#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
    double a,b,c,d,dete=0;
    cin>>a>>b;
    cin>>c>>d;
    dete=a*d-b*c;
    if (dete==0)
        cout<<dete;
    else
    {
        cout<<fixed<<setprecision(2)<<d/dete<<"\t"<<fixed<<setprecision(2)<<(-b)/dete<<"\n";
        cout<<fixed<<setprecision(2)<<(-c)/dete<<"\t"<<fixed<<setprecision(2)<<a/dete;
    }
}
