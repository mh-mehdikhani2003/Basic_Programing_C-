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
void swap_char (char x[],int a1,int a2)
{
     char temp=x[a1];
    x[a1]=x[a2];
    x[a2]=temp;
}
void swap_Array (string x[],int a1,int a2)
{
    string temp=x[a1];
    x[a1]=x[a2];
    x[a2]=temp;
}
void bubble_sort(string x[],int i1,int i2,int h)
{
    int komak=0;
   char gensharf [i2-i1+1];
   for(int i=i1;i<=i2;i++)
   {
       gensharf[komak]=x[i].at(h);
       if(x[i].at(h)<96){x[i].at(h)+=32;}
       komak++;
   }
   for (int y=1;y<=i2-i1+1;y++)
   {
       for(int i=i1, j=0;i<i2 && j<i2-i1;j++,i++)
       {
           if(x[i].at(h)>x[i+1].at(h)){swap_Array(x,i,i+1);swap_char(gensharf,j,j+1);}
       }
   }


   int a1,a2;
   for(int i=i1, j=0;i<i2 && j<i2-i1;j++,i++)
   {
       if(x[i].at(h)==x[i+1].at(h))
       {
           a1=i;
           while((i<i2 && j<i2-i1)  && x[i].at(h)==x[i+1].at(h))
           {
               a2=i+1;
                if(gensharf[j]<96){x[i].at(h)-=32;}
               i++;
               j++;
           }
            if(gensharf[j]<96){x[i].at(h)-=32;}
            for(int t=1;t<=a2-a1+1;t++)
            {
                for(int p=a1;p<a2;p++)
                {
                    if(x[p].at(h)>x[p+1].at(h)){swap_Array(x,p,p+1);}
                }
            }

       }
   }
}
void moratab_mosavi (string A[],int i1,int i2,int h1)
{
    bool Andaze_hadaghal=false;
    for(int b=i1;b<=i2;b++)
    {
        if(A[b].length()>h1+1){Andaze_hadaghal=true;}
    }
    int a1,a2,h;
    if(h1<=3 && Andaze_hadaghal==true)
    {
    for(int i=i1;i<i2;i++)
   {
       h=h1;
       if(A[i].at(h)==A[i+1].at(h))
       {
           a1=i;
           while(i<i2  &&  A[i].at(h)==A[i+1].at(h))
           {
               a2=i+1;
               i++;
           }
           int kootah=a1;
           h++;
            for(int j=a1;j<=a2;j++)
            {
                
                
                if(A[j].length()<h+1)
                {
                    swap_Array(A,kootah,j);kootah++;
                }

            }
            a1=kootah;
            bubble_sort(A,a1,a2,h);
            moratab_mosavi(A,a1,a2,h);
       }
   }
    }
}
int main()
{
    string x;
    int h=0,n=0,dasht=0;
    string hichi;
    getline(cin,hichi);
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
    int i2=dasht-1,i1=0;
  bubble_sort(A,i1,i2,0);

   i1=0,i2=dasht-1;
   
  moratab_mosavi(A,i1,i2,0);

 for(int i=0;i<dasht;i++)
 {
     cout<<A[i]<<" ";
 }
    return 0;
}