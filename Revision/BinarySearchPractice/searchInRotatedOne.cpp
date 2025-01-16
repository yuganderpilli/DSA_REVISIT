#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {9, 10, 11, 1, 2, 3, 4, 5, 6, 7, 8};
    int sizes = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = sizes - 1;
    int find = 6;
    while (low <= high)
    {
        int mid = (low + (high - low) / 2);
        if (arr[mid] == find)
        {
            cout << arr[mid] << " " << mid << endl;
            break;
        }
         if (arr[mid] >= arr[low])
        {
            if (find < arr[mid] && find >= arr[low])
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
            if (find > arr[mid] && arr[high] >= find)
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