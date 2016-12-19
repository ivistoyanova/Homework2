#include <iostream>

using namespace std;
void mergeArr (int* pointer1,int size1, int* pointer2, int size2)
{
    int arr3[1000];
    int currentIndex = 0, currentIndex1 = 0, currentIndex2 = 0;
    while (currentIndex1 < size1 && currentIndex2 < size2)
    {
        if (pointer1[currentIndex1] < pointer2[currentIndex2])
        {
            arr3[currentIndex] = pointer1[currentIndex1];
            currentIndex1++;
        }
        else
        {
            arr3[currentIndex] = pointer2[currentIndex2];
            currentIndex2++;
        }
        currentIndex++;

    }
    while (currentIndex1 < size1)
    {
        arr3[currentIndex] = pointer1[currentIndex1];
        currentIndex1++;
        currentIndex++;
    }
    while (currentIndex2 < size2)
    {
        arr3[currentIndex] = pointer2[currentIndex2];
        currentIndex2++;
        currentIndex++;
    }
     for (int i = 0; i < currentIndex; i++)
        {
            cout << arr3[i] << " ";
        }
        cout << endl;
}
int main()
{
 int arr1[] = {1, 3};
 int arr2[] = {2, 2, 4 , 6, 8, 10};
 mergeArr(arr1, sizeof(arr1)/sizeof(arr1[0]), arr2, sizeof(arr2)/sizeof(arr2[0]));
    return 0;
}
