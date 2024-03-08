#include <iostream>
using namespace std;
bool unic(int p)
{

    if (p <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= p; i++)
    {
        if (p % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int c = 0;
    for (int i = n + 1; i <= m; i++)
    {
        if (unic(i))
        {
            c++;
        }
    }

    if (c == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}