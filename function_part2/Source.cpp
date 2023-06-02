#include<iostream>
#include<cstdlib>

using namespace std;


void sort_1(int arr[], int SIZE, bool d ) {
	if (d == false) {
		for (int i = 0; i < SIZE; i++) {
			for (int j = 0; j < SIZE - i - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					swap(arr[j + 1], arr[j]);
				}
			}
		}
	}
	if (d == true) {
		for (int i = 0; i < SIZE; i++) {
			for (int j = 0; j < SIZE - i - 1; j++) {
				if (arr[j] < arr[j + 1]) {
					swap(arr[j + 1], arr[j]);
				}
			}
		}
	}
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << " ";
	}
}
	
int main()
{
	int a;
	const int SIZE = 10;
	int arr[SIZE] = { 1, 5, 3, 4, 2, 10, 9, 8, 7, 6 };
	bool d ;
	cout<<"Enter 1  to indicate false or 2 for  indicate true: ";
	cin>>a;
	if (a == 1) {
		sort_1(arr, SIZE, d = false);
	}
	else if (a != 1) {
		sort_1(arr, SIZE, d = true);
	}
	
	

	system("pause>nul");
	return 0;
}
