#include <iostream>
#include <cstdlib>
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

void swapPointers(int * a, int * b)
{
    int * temp = a;
    a = b;
    b = temp;
}

void sortPointers(int *arr[size])
{
    for(int i = 0; i < size; i++)
    {
        int minIndex = i;
        for(int j = i; j < size; j++)
        {
            if(*arr[j] < *arr[minIndex])
            {
                minIndex = j;
            }
        }

        swapPointers(arr[i], arr[minIndex]);
    }
}

void copyPointers(int *arrDestination[size], int * arrSource)
{
    for(int i = 0; i < size; i++)
    {
        arrDestination[i] = &(arrSource[i]);
    }
}

int * search(int * arr, int element)
{
    int *sortedArr[size];

    copyPointers(sortedArr, arr);
    sortPointers(sortedArr);

    int from = 0, to = size-1;
    while(from != to)
    {
        int middle = (to-from)/2;
        if(*sortedArr[middle] == element)
        {
            return sortedArr[middle];
        }
        else if(*sortedArr[middle] < element)
        {
            from = middle;
        }
        else
        {
            to = middle;
        }
    }

    return NULL;
}

int main()
{
    int array[size];
    initArray(array);
    cout << "found it at address " << search(array, 3) << "!";

    return 0;
}
