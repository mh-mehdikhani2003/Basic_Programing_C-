#include <iostream>
#include <cmath>
using namespace std;
void dayere (float R,float x,float y)
{
    //R=(int)(100*R);
    //y=(int)(100*y);
    //x=(int)(100*x);
    //R=R*0.001;
    //y=y*0.001;
    //x=x*0.001;
    if (fabs((x*x)+(y*y)-(R*R))<=0.001)
        cout<<"Yes";
    else
        cout<<"No";
}
void beizy (float a,float b,float x,float y)
{
    //a=(int)(100*a);
    //b=(int)(100*b);
    //x=(int)(100*x);
    //y=(int)(100*y);
    //a=a*0.001;
    //b=b*0.001;
    //x=x*0.001;
    //y=y*0.001;
    if(fabs((x*x)/(a*a)+(y*y)/(b*b)-1)<=0.001)
        cout<<"Yes";
    else
    {
        cout<<"No";
    }
}
int main()
{
    float R=0,a=0,b=0;
    float x,y;
    char n='b';
    while (n!='e')
    {
        n=getchar();
        if(n=='c')
        {
            cin>>R>>x>>y;
            dayere(R,x,y);    
        }
        if(n=='o')
        {
            cin>>a>>b>>x>>y;
            beizy(a,b,x,y);  
        }
    }
    return 0;
}