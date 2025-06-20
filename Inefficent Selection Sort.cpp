#include <iostream>
using namespace std;

int main()
{
    const int size = 7;
    int min, arr[size];
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        cout << i << "th index: ";
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        min = i;
        for (int j = i; j < size; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        if (i != min)
        {
            arr[i] = arr[i] + arr[min];
            arr[min] = arr[i] - arr[min];
            arr[i] = arr[i] - arr[min];
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}
