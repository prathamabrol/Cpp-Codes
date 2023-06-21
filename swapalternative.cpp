#include <iostream>
using namespace std;

void swaping(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    int array[6] = {2, 3, 4, 5, 6, 7};

    swaping(acchaji, 5);
    printArr(acchaji, 5);
    // swapAlter(array, 6);
    // printArr(array, 6);
    return 0;
}