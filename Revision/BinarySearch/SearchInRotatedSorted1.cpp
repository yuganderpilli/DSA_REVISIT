#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int sizes = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = sizes - 1;
    int target = 1;
    while (low <= high)
    {
        int mid = low + ((high - low)) / 2;
        if (arr[mid] == target)
        {
            cout << mid << endl;
            break;
        }
        if (arr[mid] >= arr[low])
        {
            if (arr[mid] > target && arr[low] <= target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (arr[mid] < target && arr[high] <= target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
}