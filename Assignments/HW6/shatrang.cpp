#include <iostream>
using namespace std;
int tahdid_rokh (int A[8][8],int i,int j,int tahdid)
{
    
    for(int h=0;h<8 ;h++)
    {
        if(h==j){continue;}
        if(A[i][h]==2  ||  A[i][h]==1){tahdid++;}
    }
     for(int h=0;h<8 ;h++)
    {
         if(h==i){continue;}
        if(A[h][j]==2  ||  A[h][j]==1){tahdid++;}
    }
    return(tahdid);
}
int tahdid_vazir (int A[8][8],int i,int j,int tahdid)
{
    
     for(int h=0;h<8;h++)
    {
        if(h==j){continue;}
        if(A[i][h]==2  ||  A[i][h]==1){tahdid++;}
    }
     for(int h=0;h<8 ;h++)
    {
         if(h==i){continue;}
        if(A[h][j]==2  ||  A[h][j]==1){tahdid++;}
    }
    //بسمت شمال شرق قطری
    int i1=i,j1=j;
     i1--;j1++;
    while(i1>=0 &&  j1<8)
    {
        if(A[i1][j1]==1 || A[i1][j1]==2){tahdid++;}
        i1--;j1++;
    }
    //بسمت شمال غرب قطری
     i1=i;
     j1=j;
     i1--;j1--;
    while(i1>=0 &&  j1>=0)
    {
        
        if(A[i1][j1]==1 || A[i1][j1]==2){tahdid++;}
        i1--;j1--;
    }
    //بسمت جنوب غربی قطری
     i1=i;
     j1=j;
     i1++;j1--;
    while(i1<8 &&  j1>=0)
    {
        if(A[i1][j1]==1 || A[i1][j1]==2){tahdid++;}
        i1++;j1--;
    }
    //بسمت جنوب شرقی قطری
     i1=i;
     j1=j;
     i1++;j1++;
    while(i1<8 &&  j1<8)
    {
        
        if(A[i1][j1]==1 || A[i1][j1]==2){tahdid++;}
        i1++;j1++;
    }
    return (tahdid);
}
int main()
{
    
    int SAFHE[8][8],tahdid=0;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>SAFHE[i][j];
        }
    }
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(SAFHE[i][j]==2){tahdid=tahdid_rokh(SAFHE,i,j,tahdid);}
           if(SAFHE[i][j]==1){tahdid=tahdid_vazir(SAFHE,i,j,tahdid);}
           
        }
    }
    cout<<tahdid;
    return 0;
}