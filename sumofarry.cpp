#include <iostream>
using namespace std;

int sumArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int size;

    cout << "Enter the size of an array. " << endl;
    cin >> size;
    cout << "Enter the Elements of an array. " << endl;
    int array[5];
    for (int i = 0; i < size; i++)
        cin >> array[i];
    cout << "Sum of all the elements of an array is " << sumArray(array, size) << endl;
}