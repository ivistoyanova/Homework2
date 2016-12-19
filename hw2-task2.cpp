#include <iostream>

using namespace std;
const int size = 100;

void initArr (int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
    cout << "arr[" << i << "] = ";
    cin >> arr[i];
    }
}

void upSide (int* arr, int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
    cout << arr[i] << " ";
    }
}
int main()
{
int arr[size], size;
cout << "Enter a number: ";
cin >> size;
initArr(arr,size);
upSide(arr, size);
    return 0;
}
