#include <iostream>
using namespace std;
string mysubstr (string x, int n, int h)
{
	string split = "";
	for(   ;n <= h; n++)
    {
        split += x[n];
    }
	
	return (split);
}
int main()
{
      string x;
    int h=0,n=0,dasht=0;
    getline(cin,x);
    for(int i=0;i<x.length();i++)
    {
     
        if(x[0]!=' ' && i==0){dasht++;}
        if((x[i]==' ') &&  (x[i+1]!=' ') && (i!=x.length()-1)){dasht++;}
        
    }
    string A[dasht];
    int komak=dasht-1;
    for(int i=x.length()-1;i>=0;i--)
    {
        if(x[x.length()-1]!=' ' && i==x.length()-1){h=i;}
        if((x[i]!=' ') &&  (x[i+1]==' ') && (i!=x.length()-1)){h=i;}
        if((x[i]!=' ') &&  (x[i-1]==' ') && (i!=0)){n=i;A[komak]=mysubstr(x,n,h),komak--;}
        if(x[0]!=' ' && i==0){n=i;A[komak]=mysubstr(x,n,h),komak--;}

    }
    for(int i=dasht-1;i>=0;i--)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
