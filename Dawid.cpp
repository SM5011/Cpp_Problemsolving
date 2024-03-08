#include<iostream>
using namespace std;

void selection_sort(int n, int array[]) {
    int i, j, min_index, temp;

    // Loop through the entire array
    for (i = 0; i < n - 1; i++) {
        // Assume the current element as the minimum
        min_index = i;

        // Find the minimum element in the unsorted portion of the array
        for (j = i + 1; j < n; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }

        // Swap the minimum element with the first element of the unsorted portion
        temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
}

int main() {
    
    int array[4];
    
    for (int i = 0; i < 4; i++) {
        cin >> array[i];
    }

    selection_sort(4, array); // Call the selection_sort function to sort the array
    
    

    if ((array[0] + array[3]) == (array[2] + array[1])) {
        cout << "YES" << endl;
    } else if ((array[0] + array[1] + array[2]) == array[3]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
