#include <iostream>
using namespace std;
void Hanoi(int n, char from_stick,char to_stick, char mid_stick) 
{ 
    if (n == 0) 
    {
        return; 
    } 
    Hanoi(n - 1, from_stick, mid_stick, to_stick); 
    cout <<  from_stick <<" --> " << to_stick << endl; 
    Hanoi(n - 1, mid_stick, to_stick, from_stick); 
} 


int main() 
{ 
    int n ;
    cin>>n;
    Hanoi(n, 'A', 'C', 'B'); 
    return 0; 
}