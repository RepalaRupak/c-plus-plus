#include <iostream>
using namespace std;

// Function to calculate the sum of elements in the array using recursion
int sum_of(int arr[], int n) {
    if (n <= 0) {
        return 0;
    } else {
        return sum_of(arr, n - 1) + arr[n - 1]; // Correct index for zero-based array
    }
}

int main() {
    int n;
    cout << "Enter the number of natural numbers (n):" << endl;
    cin >> n;
    
    int arr[n - 1]; // We need n-1 elements since one is missing
    
    cout << "Enter the " << (n - 1) << " numbers (one is missing):" << endl;
    for (int i = 0; i < (n - 1); i++) {
        cin >> arr[i];
    }
    
    // Calculate the expected sum of first n natural numbers
    float actual_sum = (n * (n + 1)) / 2.0;
    
    // Calculate the sum of elements in the array
    int sum = sum_of(arr, n - 1);
    
    // Calculate the missing number
    int missing = actual_sum - sum;
    
    cout << "The missing number is: " << missing << endl;
    
    return 0;
}

