#include <iostream>
using namespace std;
void SWAP (int A[],int b,int a)
{
    int temp=A[a];
    A[a]=A[b];
    A[b]=temp;
}
void QUICK_SORT (int A[],int i1,int i2)
{
    if(i2-i1>0){
    int pivot=A[i1];
    int bigger=0,smaller_equal=0;
    for(int i=i1;i<=i2;i++)
    {
        if(A[i]>pivot){bigger++;}
    }
     for(int i=i1;i<=i2;i++)
    {
        if(A[i]<=pivot){smaller_equal++;}
    }
    smaller_equal--;
    SWAP (A,i1,i1+smaller_equal);
    int komak_smaller=i1;
    
    for(int i=i1;i<=i2;i++)
    {
        if(i==(i1+smaller_equal)){continue;}
        if(A[i]<=pivot)
        {
            if(i!=komak_smaller )
            {
                SWAP (A,i,komak_smaller);
            }
            komak_smaller++;
        }
    }
    QUICK_SORT(A,i1,i1+smaller_equal-1);
    QUICK_SORT(A,smaller_equal+i1+1,i2);
    }
}
int main ()
{
    int  n;
    cin>>n;
    int A[n];
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
  QUICK_SORT(A,0,n-1);
  for(int i=0;i<n;i++)
  {
      cout<<A[i]<<" ";
  }
    return 0;
}