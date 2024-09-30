#include <iostream>
using namespace std;
#include <iomanip>
 int MAX ( int max1, int max2, int max3)
{
    int temp=max1;
    if (temp<max2)
        temp=max2;
    if(temp<max3)
        temp=max3;
    return (temp);
}
int main()
{
     int bet1,bet2,bet3,dep1,dep2,dep3,max1=0,max2=0,max3=0;
    int h=0;
    cin>>dep1>>dep2>>dep3>>h;
    for( int i=h;i>0;i--)
    {
        cin>>bet1>>bet2>>bet3;   
        if(bet1>dep1)
            bet1=dep1;
        if(bet2>dep2)
            bet2=dep2;
        if(bet3>dep3)
            bet3=dep3;
        if (bet1>max1)
            max1=bet1;
        if (bet2>max2)
            max2=bet2;
        if (bet3>max3)
            max3=bet3;
    }
    if((MAX(max1,max2,max3)==max1)&&(h!=0))
    {
        cout<<1<<"\n"<<dep1-max1;
        return 0;
    }
    if((MAX(max1,max2,max3)==max2)&&(h!=0))
    {
         cout<<2<<"\n"<<dep2-max2;
         return 0;
    }
    if((MAX(max1,max2,max3)==max3)&&(h!=0))
    {
         cout<<3<<"\n"<<dep3-max3;
         return 0;
    }
}