#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    int a[t];
    for (int i = 0; i < t; i++) {
        cin >> a[i];
    }

    int c = 0;
    for (int i = 0; i < t; i++) {
        if (a[i] == a[0]) {
            c++;
        }
        else{
            break;
        }
    }

    cout << c << endl;
    return 0;
}
