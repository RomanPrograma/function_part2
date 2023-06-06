#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void enterArr(int arr[], int SIZE);
void sortArr(int arr[], int SIZE);

int main()
{
    srand(time(NULL));
    int start;
    int end;

    const int SIZE = 20;
    int arr[SIZE];
    enterArr(arr, SIZE);
    cout << "Arr = ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    sortArr(arr, SIZE);

    system("pause>nul");
    return 0;
}

void enterArr(int arr[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 40 - 20;
    }
}
void sortArr(int arr[], int SIZE)
{
    int start{};
    for (int i = 0; i < SIZE; i++)
    {

        if (arr[i] < 0)
        {
            start = i;
            break;
        }
    }
    int end{};
    for (int i = SIZE - 1; i >= 0; i--)
    {
        if (arr[i] < 0)
        {
            end = i;
            break;
        }
    }
    for (int i = start; i < end - 1; i++)
    {
        for (int j = start; j < end - start; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j + 1], arr[j]);
            }
        }
    }
    cout << endl << endl << "sort = ";
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
}