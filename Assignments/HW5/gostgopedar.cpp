#include <iostream>
using namespace std;
#include <cmath>
bool aval ( int n)
{
     int c=1;
    for( int i=2;(i<=sqrt(n))&&(c==1);i++)
    {
        if(n%i==0)
            c=0;
    }
    return(c);
}
int gamragham ( int t )
{
    int sum=0;
       
        while (t/10!=0)
        {
            sum+=t%10;
            t=t/10;
        }

    return(sum+t);
}
int gamaval ( int t)
{
    int sum=0;
    
        if (aval(t)){sum=t;}
        if(!aval(t))
        {
            for (int j=2;j<=(t/2);j++)
            {
               if((t%j==0)&&(aval(j))){sum+=j;} 
            }
        }
        return (sum);
}
int Dx (int t)
{
    if(t==1){return (2);}
    return(t+gamaval(t)+gamragham(t));
}
int main()
{
    int t;
    cin>>t;
    int a,c=0;
    for(int i=0;i<t;i++)
    {
        c=0;
        cin>>a;
        for(int j=1;j<a;j++)
        {
            if(a==Dx(j)){cout<<"Yes"<<"\n";c=1;break;}
        }
        if(c==0){cout<<"No"<<"\n";}
    }
    
  //  for(int i=0;i<t;i++)
  //  {
  //      if(A[i]==-1){cout<<"Yes"<<endl;}
  //      if(A[i]!=-1   && A[i]!=2 && A[i]!=999){cout<<"No"<<endl;}
 //       if(A[i]==2){cout<<"Yes"<<endl;}
  //      if(A[i]==999){cout<<"Yes"<<endl;}
  //  }
    
    return 0;
}