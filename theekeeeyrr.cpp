#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size)
{

    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    cout << "Enter the size." << endl;
    int n;
    cin >> n;

    int acchaji[100];

    cout << "ENTER THE ELEMENTS OF ARRAY. " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> acchaji[i];
    }

    /* int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
     int odd[5] = {11, 33, 9, 76, 43};*/

    swapAlternate(acchaji, n);
    printArray(acchaji, n);

    return 0;
}