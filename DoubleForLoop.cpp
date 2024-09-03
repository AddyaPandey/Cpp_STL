#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        { // in same forloop we cannot use i 2 times so i used j here
            cout << i << " "<<endl;
        }
    }
}