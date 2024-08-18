//wave print 
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int arr[rows][cols];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Wave print of the matrix is:\n";
    for (int j = 0; j < cols; j++) {
        if (j % 2 == 0) {
            // Print top to bottom for even indexed columns
            for (int i = 0; i < rows; i++) {
                cout << arr[i][j] << " ";
            }
        } else {
            // Print bottom to top for odd indexed columns
            for (int i = rows - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;

    return 0;
}
