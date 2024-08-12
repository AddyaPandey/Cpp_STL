#include <bits/stdc++.h>
using namespace std;

int simpleArraySum<vector<int> ar>
{

    int sum = 0;
    for (int i = 0; i < ar.size(); i++)
    {
        sum = sum + ar[i];
    }
    return 0;
}

int main()
{
    int n;
    cin >> n; // read the size of array
    vector<int> ar(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i]; //read the array elements
    }

    cout<<simpleArraySum(ar)<<endl;// show the output
    return 0;
}
