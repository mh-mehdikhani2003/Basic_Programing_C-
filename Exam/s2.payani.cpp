
#include <iostream>
using namespace std;
string todowner(string x)
{
    for(int i=0;i<x.length();i++)
    {
        if(x[i]>=65 && x[i]<=90){x[i]+=32;}
    }
    return (x);
}
int main()
{
    string x;
    getline(cin,x);
    x=todowner(x);
    bool letters[26];
    for(int i=0;i<26;i++)
    {
        letters[i]=false;
    }
    for(int i=0;i<x.length();i++)
    {
        if(x[i]>=97 && x[i]<=122)
        {
            letters[x[i]-97]=true;
        }
    }

    for(int i=0;i<26;i++)
    {
        if(letters[i]==false){cout<<"NO";return 0;}
    }
 cout<<"YES";
    return 0;
}