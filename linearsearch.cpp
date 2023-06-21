#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[8] = {21, 11, 10, 33, 27, -1, 77, 1};

    cout << "Enter the key to search for. " << endl;
    int key;
    cin >> key;
    bool found = search(arr, 8, key);
    if (found)
    {
        cout << "THE KEY IS PRESENT." << endl;
    }
    else
        cout << "THE KEY IS NOT PRESENT." << endl;
}