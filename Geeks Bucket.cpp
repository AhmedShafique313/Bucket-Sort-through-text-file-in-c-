
#include <iostream>
#include <algorithm>
using namespace std;

void bucketSort(float arr[], int n) {
    float bucket[n];
    for (int i = 0; i < n; i++) {
        bucket[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        int index = n * arr[i];
        bucket[index] = arr[i];
    }
    sort(bucket, bucket + n);
    for (int i = 0; i < n; i++) {
        arr[i] = bucket[i];
    }
}

int main() {
    float arr[] = { 0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bucketSort(arr, n);
    cout << "Sorted array is \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
