#include <iostream>
using namespace std;

void swapAlter(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
            swap(arr[i], arr[i + 1]);
    }
}
void printing(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    cout << "Enter the size you want ." << endl;
    int n;
    cin >> n;
    cout << "ENTER THE ELEMENTS OF ARRAY." << endl;
    int acchaji[100];
    for (int i = 0; i < n; i++)
    {
        cin >> acchaji[i];
    }
    cout << endl;
    swapAlter(acchaji, n);
    printing(acchaji, n);
    return 0;
}