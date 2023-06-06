#include <iostream>
#include <cstdlib>
using namespace std;

void countElements(const int arr[], int size, int& positiveCount, int& negativeCount, int& zeroCount) {
    positiveCount = 0;
    negativeCount = 0;
    zeroCount = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            positiveCount++;
        }
        else if (arr[i] < 0) {
            negativeCount++;
        }
        else {
            zeroCount++;
        }
    }
}

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    cout << "Enter " << SIZE << " elements: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cin >> arr[i];
    }

    int positiveCount, negativeCount, zeroCount;
    countElements(arr, SIZE, positiveCount, negativeCount, zeroCount);

    cout << "Positive Count: " << positiveCount << endl;
    cout << "Negative Count: " << negativeCount << endl;
    cout << "Zero Count: " << zeroCount << endl;

    return 0;
}