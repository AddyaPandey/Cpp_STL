#include <iostream>
using namespace std;
bool isPrime(int num)
{
    if (num == 1)
    {
        return false;
    }
    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    int num;
    cin >> num;
    cout<<isPrime(num);
}