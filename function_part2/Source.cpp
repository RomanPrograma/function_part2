#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void fillArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 40 - 20;
	}
}
void firsnumb(int arr[], int size) {
	int first = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			first = arr[i];
			break;
		}
	}
	cout << "First negative number: " << first << endl;
}
void lastnumb(int arr[], int size) {
	int last = 0;
	for (int i = size - 1; i >= 0; i--) {
		if (arr[i] < 0) {
			last = arr[i];
			break;
		}
	}
	cout << "Last negative number: " << last << endl;
}

int main() {

	srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE];
	fillArray(arr, SIZE);
	cout << "Array: ";
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	firsnumb(arr, SIZE);
	lastnumb(arr, SIZE);
	system("pause>nul");
	return 0;
}
