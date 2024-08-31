#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="Hello";
    int a=0,b=0;
    getline(cin,s);
    for(auto i:s)
        if(i=='#') 
            a++;
        else if(i=='*')
            b++;
    cout<<b-a;
}