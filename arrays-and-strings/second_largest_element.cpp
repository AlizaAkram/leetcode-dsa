#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[], int n) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        return -1;
    }

    return secondLargest;
}

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    if (n < 2) {
        cout << "Array must contain at least two elements";
        return 0;
    }

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findSecondLargest(arr, n);

    if (result == -1) {
        cout << "No second largest distinct element";
    } else {
        cout << "Second largest element: " << result;
    }

    return 0;
}