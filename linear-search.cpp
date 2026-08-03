#include <iostream>
using namespace std;

void linearsearch(int arr[], int n, int item)
{
    int loc = -1, j = 0;

    while (j < n)
    {
        if (arr[j] == item)
        {
            loc = j;
            break;
        }
        else
        {
            j = j + 1;
        }
    }

    if (loc >= 0)
    {
        cout << "\nSuccesful searching, The search element is at location " << loc << " and is " << arr[loc];
    }
    else
    {
        cout << "\nUnsuccesful searching, The search element " << item << " isnot found";
    }
}
int main()
{
    int n = 5;
    int arr[] = {1, 4, 6, 10, 5};
    int search = 5;
    linearsearch(arr, n, search);

    search = 11;
    linearsearch(arr, n, search);
    return 0;
}
