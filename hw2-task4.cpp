#include <iostream>
const int ROWS = 3;
const int COLS = 3;
using namespace std;
void initArray (int array[][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> array[i][j];
        }
    }
}
void printArray(int array[][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << array[i][j] << ' ';
        }
        cout << endl;
    }
}
void transpMatrix (int array[][COLS], int tArray[][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            tArray[j][i] = array[i][j];
        }
    }
}
int main()
{
    int arr[ROWS][COLS];
    int arr2[ROWS][COLS];
    initArray(arr);
    printArray(arr);
    cout << endl;
    transpMatrix(arr, arr2);
    printArray(arr2);
    return 0;
}
