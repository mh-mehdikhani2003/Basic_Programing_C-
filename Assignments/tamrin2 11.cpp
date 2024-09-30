#include <iostream>
using namespace std;
#include <math.h>
int main ()
{
    int xa,xb,xf,ya,yb,yf;
    cin>>xa>>ya>>xb>>yb>>xf>>yf;
    if((xa==xb)||(ya==yb))
    {
        if(((xf==xa)&&(xf==xb)))
        {
            if(((yb<yf)&&(yf<ya))||((ya<yf)&&(yf<yb)))
            {
                 cout<<fabs(ya-yb)+2;
                 return 0;
            }
            else{
                cout<<fabs(ya-yb);
                return 0;
            }
        }
        if(((yf==ya)&&(yf==yb)))
        {
            if(((xb<xf)&&(xf<xa))||((xa<xf)&&(xf<xb)))
            {
                cout<<fabs(xa-xb)+2;
                return 0;
            }
            else
            {
                cout<<fabs(xa-xb);
                return 0;
            }
        }
        if((xa==xb)&&(xf!=xa))
        {
            cout<<fabs(ya-yb);
            return 0;
        }
        if((ya==yb)&&(yf!=ya))
        {
            cout<<fabs(xa-xb);
            return 0;
        }
    }
    else
    {
        cout<<fabs(xa-xb)+fabs(ya-yb);
        return 0;
    }
}
