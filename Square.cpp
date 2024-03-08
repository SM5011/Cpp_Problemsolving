#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int n; // Size of the square matrix
    cin >> n;

    // Read the original matrix
    vector<vector<int>> original(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> original[i][j];
        }
    }

    // Rotate the matrix 90 degrees clockwise
    vector<vector<int>> rotated(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rotated[i][j] = original[n - 1 - j][i];
        }
    }

    // Compare and count the number of changes
    int changes = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (original[i][j] != rotated[i][j]) {
                changes++;
            }
        }
    }

    cout <<changes << endl;
}

    return 0;
}
