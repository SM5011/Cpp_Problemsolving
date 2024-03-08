#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string n;
    for (int i = 0; i < s.length(); i += 2) {
        n += s[i];
    }
    cout << n << endl;
    return 0;
}
