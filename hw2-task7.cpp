#include <iostream>
using namespace std;

const int size = 6;

void initArray (int arr[])
{
	for (int i = 0; i < size; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
}

bool removeElement (int* array, int element)
{
    bool foundElement = false;
    int newSize = size;

    for (int i = 0; i < newSize; i++)
	{
		if (array[i] == element)
        {
            foundElement = true;
            for (int j = i; j < newSize - 1; j++)
            {
                array[j] = array[j + 1];
            }
            i--;
            newSize--;
        }
	}
	return foundElement;
}

int main()
{
    int array[size];
    initArray(array);
    removeElement(array, 3);

    for (int i = 0; i < size; i ++)
    {
        cout << array[i] << ' ';
    }
    return 0;
}
