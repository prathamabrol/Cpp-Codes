#include <iostream>
using namespace std;

int lojiMax(int array[], int n)
{
    int max = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int lojiMin(int array[], int n)
{
    int min = INT32_MAX;

    for (int i = 0; i < n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}

int main()
{

    int size;
    cout << "Enter the size of array." << endl;
    cin >> size;

    int array[100];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "Maximum value is " << lojiMax(array  , size) << endl;
    cout << "Minimum value is " << lojiMin(array  , size) << endl;
}