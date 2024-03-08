#include <iostream>
using namespace std;

int main() {
    int n;
    int result = 0;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        int term = i;
        if (i % 2 == 0) {
            term = -term;
        }
        result += term;
    }

    cout << result << endl;
    return 0;
}
