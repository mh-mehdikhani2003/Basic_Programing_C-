#include <iostream>
using namespace std;
int main()
{
    int n,h=0,A1=0,A2=0,A3=0,A4=0,A5=0,A6=0,A7=0;
    string x;
    for(int i=1;i<=3;i++)
    {
        cin>>n;
        for(int j=1;j<=n;j++)
        {
                cin>>x;
                if(x=="shanbe"){A1=1;}
                if(x=="1shanbe"){A2=1;}
                if(x=="2shanbe"){A3=1;}
                if(x=="3shanbe"){A4=1;}
                if(x=="4shanbe"){A5=1;}
                if(x=="5shanbe"){A6=1;}
                if(x=="jome"){A7=1;}
        }
    }
    if(A1==0){h++;}
    if(A2==0){h++;}
    if(A3==0){h++;}
    if(A4==0){h++;}
    if(A5==0){h++;}
    if(A6==0){h++;}
    if(A7==0){h++;}
    cout<<h;
    return 0;
}