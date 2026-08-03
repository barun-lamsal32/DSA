#include <iostream>
#include <algorithm>
using namespace std;

void binarysearch(int arr[], int n, int item)
{
    sort(arr, arr + n);

    int st = 0;
    int end = n - 1;
    bool found = false;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (arr[mid] == item)
        {
            cout << "Element found at index " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] > item)
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }

    if (!found)
    {
        cout << "Element not found" << endl;
    }
}

int main()
{
    int arr[] = {1, 4, 5, 10, 20};
    int n = 5;

    binarysearch(arr, n, 20);
    binarysearch(arr, n, 30);

    return 0;
}
