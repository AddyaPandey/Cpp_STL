#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,a,m=INT_MIN;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a>m)
        {
            m=a;
            c++;
        }
    }
    cout<< c;
}