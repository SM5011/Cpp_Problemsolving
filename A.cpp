#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t; // Read the number of test cases

    while (t--)
    {
        string s;
        cin >> s; // Read the input string for each test case

        int a = 0, b = 0; // Initialize variables for digits a and b
        
        if (s[0] == s[2]) // If the first and third characters are the same
        {
            for (int i = 0; i < 10; i++)
            {
                if (s[0] == '0' + i)
                {
                    a = i;
                }
            }
            cout << 2 * a << endl; // Output double the value of a
        }
        else
        {
            for (int i = 0; i < 10; i++)
            {
                if (s[0] == '0' + i)
                {
                    a = i;
                }
                else if (s[2] == '0' + i)
                {
                    b = i;
                }
            }
            int r = a + b; // Calculate the sum of a and b
            cout << r << endl; // Output the sum
        }
    }

    return 0;
}
