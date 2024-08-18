// Finding number in 2D array
#include <iostream>
using namespace std;

int main() {
    int rows, cols, target;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int arr[rows][cols];
    cout << "Enter the elements of the 2D array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Enter the value to find: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == target) {
                cout << "Value " << target << " found at position (" << i << ", " << j << ")" << endl;
                found = true;
                break; 
            }
        }
        if (found) break; 
    }

    if (!found) {
        cout << "Value " << target << " not found in the array." << endl;
    }

    return 0;
}
