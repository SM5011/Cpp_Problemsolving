#include <iostream>
using namespace std;
int main()
{
    int n, am, ac, m = 0, c = 0, d = 0;
    cin >> n;
    while (n--)
    {
        cin >> am >> ac;
        if (am > ac)
        {
            m++;
        }
        else if (am < ac)
        {
            c++;
        }
    }
    if (m > c)
    {
        cout << "Mishka" << endl;
    }
    else if (c > m)
    {
        cout << "Chris" << endl;
    }
    else if (c == m)
    {
        cout << "Friendship is magic!^^" << endl;
    }
}