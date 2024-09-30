#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void tolid (int N,long long int adad, int K )
{
    if (N==1) 
    {
        cout<<adad<<"\n";
        return;
    }
        if ((adad%10-K)>=0) {tolid (N-1,10*adad+adad%10-K,K);}
   
    if ((adad%10+K)<=9){tolid (N-1,10*adad+(adad%10+K),K);}
        
}
int main()
{
   
    int K;
   long long int N;
   cin>>N>>K;
    for (long long int i = 1; i <= 9; i++)
     {
        tolid(N, i, K);
    }

    return 0;
}