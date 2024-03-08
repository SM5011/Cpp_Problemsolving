#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, a = 0;
    string s;
    cin >> n >> s; // Read n and the entire string

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
    }

    if (a > n - a) // Anton wins if he has more 'A's
    {
        cout << "Anton" << endl;
    }
    else if (a < n - a) // Danik wins if he has more 'D's
    {
        cout << "Danik" << endl;
    }
    else // It's a tie if the counts are equal
    {
        cout << "Friendship" << endl;
    }

    return 0;
}
