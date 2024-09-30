#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int MATRIX[n][n],motalq=0;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>MATRIX[i][j];
        }
    }
    int max_radif[n],max_sotun[n],min_radif[n],min_sotun[n];
  
     for (int i=0;i<n;i++)
    {
        max_radif[i]=MATRIX[i][0];
        for(int j=1;j<n;j++)
        {
            if(max_radif[i]<MATRIX[i][j]){max_radif[i]=MATRIX[i][j];}
        }
    } 
    for (int i=0;i<n;i++)
    {
        min_radif[i]=MATRIX[i][0];
        for(int j=1;j<n;j++)
        {
            if(min_radif[i]>MATRIX[i][j]){min_radif[i]=MATRIX[i][j];}
        }
    }
     for (int i=0;i<n;i++)
    {
        max_sotun[i]=MATRIX[0][i];
        for(int j=1;j<n;j++)
        {
            if(max_sotun[i]<MATRIX[j][i]){max_sotun[i]=MATRIX[j][i];}
        }
    }
     for (int i=0;i<n;i++)
    {
        min_sotun[i]=MATRIX[0][i];
        for(int j=1;j<n;j++)
        {
            if(min_sotun[i]>MATRIX[j][i]){min_sotun[i]=MATRIX[j][i];}
        }
    }
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((MATRIX[i][j]==min_radif[i]  && MATRIX[i][j]==max_sotun[j])||(MATRIX[i][j]==max_radif[i]    && MATRIX[i][j]==min_sotun[j]))
            {
                cout<<i+1<<" "<<j+1<<"\n";
                motalq=1;
            }
            
        }
    }
    if(motalq==0)
    {
        cout<<-1;
    }
    return 0;
}