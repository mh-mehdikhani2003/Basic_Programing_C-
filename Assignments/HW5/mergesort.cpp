#include <iostream>
#include <string.h>
using namespace std;
void merge (int donbale[],int a,int b,int c)
{
   
    int n=c-b,r=b-a+1,shomrande=0;
    int A[r],B[n];
    for(int t=a;t<=b;t++)
    {
        A[shomrande]=donbale[t];shomrande++;
    }
    shomrande=0;
    for(int t=b+1;t<=c;t++)
    {
        B[shomrande]=donbale[t];shomrande++;
    }
    int p=r+n,a1=0,b1=0;
    int C[p];
    for(int j=0;j<p;j++)
    {
        if(a1==r ){ C[j]=B[b1];b1++;continue;}
        if(b1==n ){ C[j]=A[a1];a1++;continue;}
        if(A[a1]>B[b1]){C[j]=B[b1];b1++;continue;}
        if(A[a1]<=B[b1]){C[j]=A[a1];a1++;continue;}
        
    }
    shomrande=0;
    for(int k=a;k<=c;k++)
    {
        donbale[k]=C[shomrande];shomrande++;
    }

}
void toint (string A[],int B[],int dasht)
{
    char alamat;
    for(int i=0;i<dasht;i++)
    {
        alamat='+';
        B[i]=0;
        for(int j=0;j<=A[i].length()-1;j++)
        {
            if(A[i].at(j)=='-'){alamat='-';}
            if(A[i].at(j)!='-'){B[i]*=10;B[i]+= A[i].at(j)-48;}
        }
        if(alamat=='-'){B[i]=B[i]*-1;}
    }
}
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
    int B[dasht];
    int komak=dasht-1;
    for(int i=x.length()-1;i>=0;i--)
    {
        if(x[x.length()-1]!=' ' && i==x.length()-1){h=i;}
        if((x[i]!=' ') &&  (x[i+1]==' ') && (i!=x.length()-1)){h=i;}
        if((x[i]!=' ') &&  (x[i-1]==' ') && (i!=0)){n=i;A[komak]=mysubstr(x,n,h),komak--;}
        if(x[0]!=' ' && i==0){n=i;A[komak]=mysubstr(x,n,h),komak--;}

    }
  toint(A,B,dasht);
  
 for(int n=1;n<=dasht/2;n*=2)
 {
     for(int i=0;i<=dasht-2*n;i+=2*n)
     {
         merge(B,i,i+n-1,i+(2*n)-1);
     }
 }
 for(int i=0;i<dasht;i++)
 {
     cout<<B[i]<<" ";
 }

    return 0;
}