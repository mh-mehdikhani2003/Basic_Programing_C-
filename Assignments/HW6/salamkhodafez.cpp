#include <iostream>
#include <string.h>
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
void salam (string x[],int andaze)
{
    int kahande=-1;
    for(int i=0;i<andaze;i++)
    {
        kahande=-1;
        while (i+kahande>=0)
        {
            cout<<x[i]<<":"<<" salam "<<x[i+kahande]<<"!"<<"\n";kahande--;
        }
        
    }
}
void khodafez (string x[],int andaze)
{
    for(int i=0;i<andaze;i++)
    {
        cout<<x[i]<<": khodafez bacheha!"<<"\n";
        for(int j=i+1;j<andaze;j++)
        {
            cout<<x[j]<<": khodafez "<<x[i]<<"!"<<"\n";
        }
    }
}
int main()
{
    int h=0,n=0,dasht=0;
    string x,bikhaod;
    getline(cin,bikhaod);
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
    salam(A,dasht);
    khodafez(A,dasht);
    return 0;
}