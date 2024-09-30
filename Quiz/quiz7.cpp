#include <iostream>
using namespace std;
long long int tavan (int k,int n)
{
  int komak =k;
  long long int gavab=k;
  if(n==0)
  {
    gavab=1;
    return(gavab);
  }
  if(n==1)
  {
    return(gavab);
  }
  else{
  for(int i=2;i<=n;i++)
  {
    
    gavab*=komak;
  }
  }
  return (gavab);
}
bool check (long long int V[],int n)
{
  bool CHECK=true;
  int j=0;
  for(int i=0;i<n;i++)
  {
    if(V[i]==0){continue;}
    if(V[i]!=0)
    {
      if(i!=n-1)
      {
       j=i+1;
      while (j<n  && V[j]!=V[i] )
      {
        j++;
      }
      if(j==n){continue;}
      if(j<n && V[j]==V[i]){CHECK=false;return (CHECK);}
      }
    }
  }
  return check;
}
int bozorgtarin_tavan (long long int V[],int i,int k)
{
  int tavan_max=0;
  while (tavan(k,tavan_max)<=V[i])
  {
    tavan_max++;
  }
  tavan_max--;
  return (tavan_max);
}
int main()
{
  bool tekrar=false;
  int n,j=0,i_max=0;
  int k;
  cin>>n>>k;
  long long int  V[n],k_tavan_max=1;
  while(tavan(k,i_max)<=tavan(10,16))
  {
    i_max++;
  }
  i_max--;
  for(int i=0;i<n;i++)
  {
    cin>>V[i];
  }
  int tavan_marahel[i_max+1];
  tavan_marahel[0]=1;
  for(int i=1;i<=i_max;i++)
  {
    tavan_marahel[i]=0;
  }
   tekrar=check(V,n);
  if(tekrar==false){cout<<"NO";return 0;}
  for(int i=0;i<n;i++)
  {
    while(V[i]>=k || V[i]==1)
    {
      if(bozorgtarin_tavan(V,i,k)==0){if(tavan_marahel[0]==0){cout<<"NO";return 0;}if(tavan_marahel[0]==1){tavan_marahel[0]=0;}}
       if(bozorgtarin_tavan(V,i,k)!=0){if(tavan_marahel[bozorgtarin_tavan(V,i,k)]!=0){cout<<"NO";return 0;}if(tavan_marahel[bozorgtarin_tavan(V,i,k)]==0){tavan_marahel[bozorgtarin_tavan(V,i,k)]=bozorgtarin_tavan(V,i,k);}}
      V[i]-=tavan(k,bozorgtarin_tavan(V,i,k));
    }
  }
  tekrar=check(V,n);
  if(tekrar==false){cout<<"NO";return 0;}
  if(tekrar==true){cout<<"YES";return 0;}
  return 0;
}