#include <iostream>
using namespace std;
char shib(int A[],int a)
{
    char moshtaq;
    if(A[a+1]-A[a]<0){moshtaq='-';return(moshtaq);}
    if(A[a+1]-A[a]>0){moshtaq='+';return(moshtaq);}
    else { moshtaq='0';return(moshtaq);}
}
int main ()
{
 int n,max_min=0,komak1=0,komak2=0,komak3=0;
 cin>>n;
 char nook;
 int gomalat[n];
 for(int i=0;i<n;i++)
 {
     cin>>gomalat[i];
 }
 for(int i=0;i<n-2;i++)
 {
     if(shib(gomalat,i)=='+' && shib(gomalat,i+1)=='-'){nook='G';max_min++;continue;}
     if(shib(gomalat,i)=='-' && shib(gomalat,i+1)=='+'){nook='D';max_min++;continue;}
     if(max_min==1 && nook=='G'){
   //  if(shib(gomalat,i)=='+' && shib(gomalat,i+1)=='0'){max_min++;continue;}
     if((shib(gomalat,i)=='-' && shib(gomalat,i+1)=='0')||(shib(gomalat,i)=='-' && shib(gomalat,i+1)=='+')){max_min++;continue;}

     }
      if(max_min==1 && nook=='D'){
          if((shib(gomalat,i)=='+' && shib(gomalat,i+1)=='0')||(shib(gomalat,i)=='+' && shib(gomalat,i+1)=='-')){max_min++;continue;}
      }

     if(shib(gomalat,i)=='0' && shib(gomalat,i+1)=='-'){nook='G';max_min++;continue;}
     if(shib(gomalat,i)=='0' && shib(gomalat,i+1)=='+'){nook='D';max_min++;continue;}
 }

 for(int i=0;i<n-1;i++)
 {
     if(gomalat[i+1]-gomalat[i]>0){komak1++;}
 }
 if(komak1==n-1){max_min++;}


 for(int i=0;i<n-1;i++)
 {
     if(gomalat[i+1]-gomalat[i]<0){komak2++;}
 }
 if(komak2==n-1){max_min++;}


 for(int i=0;i<n-1;i++)
 {
     if(gomalat[i+1]-gomalat[i]==0){komak3++;}
 }
 if(komak3==n-1){max_min++;}

if(max_min!=1){cout<<"No";}

if(max_min==1){cout<<"Yes";}
    return 0;
}