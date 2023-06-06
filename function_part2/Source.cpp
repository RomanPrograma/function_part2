#include<iostream>
#include<cstdlib>

using namespace std;


void sort_1(int arr[], int SIZE ) {
	for (int i = 0; i < SIZE/2; i++) {
			for (int j = 0; j < (SIZE/2) - i - 1; j++) {
				if (arr[j] < arr[j + 1]) {
					swap(arr[j + 1], arr[j]);
				}
			}
		}
		for (int i = 5; i < SIZE-1 ; i++) {
			for (int j = 5; j < SIZE  - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					swap(arr[j + 1], arr[j]);
				}
			}
		}
		
	
	
}

int main()
{
	
	const int SIZE = 10;
	int arr[SIZE] = { 1, 5, 3, 4, 2, 10, 9, 8, 7, 6 };
	sort_1(arr, SIZE);
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << " ";
	}



	system("pause>nul");
	return 0;
}