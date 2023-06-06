#include <iostream>
#include <cstdlib>
using namespace std;

double calculateAverage(const int arr[], int size) {
    if (size == 0) {
        return 0.0;
    }

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / size;

    return average;
}

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    cout << "Enter " << SIZE << " elements: ";
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr[i];
    }

    double average = calculateAverage(arr, SIZE);

    cout << "Average: " << average << endl;

    return 0;
}