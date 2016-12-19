#include <iostream>
using namespace std;
const int size = 5;
void initArray (double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
}

int findIndex (double* arr, int size)
{
    if (arr[size - 1] == arr[size - 2])
        return size - 1;
	for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] == (arr[i - 1] + arr[i + 1]) / 2)
            return i;
    }
    if (arr[0] == arr[1])
        return 0;

    return -1;
}

int main ()

{
double arr[size];
initArray(arr, size);
cout << findIndex (arr, size);
return 0;
}
