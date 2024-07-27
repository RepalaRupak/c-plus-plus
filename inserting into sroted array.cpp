#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the value to insert in the sorted array:" << endl;
    cin >> n;

    vector<int> arr = {1, 3, 5, 7, 10, 14, 20};
    arr.push_back(0);  // Add a dummy element to increase the size

    int i = arr.size() - 2; // Start from the last valid element

    // Shift elements to the right until finding the correct position for n
    while (i >= 0 && arr[i] > n) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert the new element at the correct position
    arr[i + 1] = n;

    // Print the updated vector
    cout << "Updated array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

