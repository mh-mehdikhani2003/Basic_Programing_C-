#include <iostream>
#include <string.h>
using namespace std;
string todowner(string x)
{
    for(int i=0;i<x.length();i++)
    {
        if(96>x[i]){x[i]=x[i]+32;}
    }
    return (x);
}
int main ()
{
 string X[1001],reshte_mored_nazar;
 int tedad_reste=0,gavab=0;
 getline(cin,X[tedad_reste]);
 X[tedad_reste]=todowner(X[tedad_reste]);
tedad_reste++;
 while(X[tedad_reste-1]!="end")
 {
     getline(cin,X[tedad_reste]);
     X[tedad_reste]=todowner(X[tedad_reste]);
     tedad_reste++;
 }
 getline(cin,reshte_mored_nazar);
 reshte_mored_nazar=todowner(reshte_mored_nazar);
 int ekhtelaf=0;
 for(int h=0;h<tedad_reste-1;h++)
 {
     ekhtelaf=X[h].length()-reshte_mored_nazar.length();
     if(ekhtelaf<0){continue;}
    for(int i=0;i<=(X[h].length())-(reshte_mored_nazar.length());i++)
   {
      if(reshte_mored_nazar[0]==X[h].at(i))
      {
         for(int j=1;j<reshte_mored_nazar.length();j++)
         {
            if(reshte_mored_nazar[j]!=X[h].at(i+j)){break;}
            if(j==reshte_mored_nazar.length()-1)
            {
                if(reshte_mored_nazar[j]==X[h].at(i+j))
                {
                    gavab++;
                    
                }
            }
         }

      }
   }
 }
cout<<gavab;



    return 0;
}