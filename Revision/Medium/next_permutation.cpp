#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {7, 6, 5, 4, 3, 2, 1};
    int brr[] = {2, 1, 5, 4, 3, 0, 0};

    int sizes = sizeof(arr) / sizeof(arr[0]);
    next_permutation(brr, brr + sizes);
    int pivot = -1;
    for (int i = sizes - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            pivot = i;
            break;
        }
    }

    if (pivot != -1)
    {
        for (int i = sizes - 1; i > pivot; i--)
        {
            if (arr[i] > arr[pivot])
            {
                swap(arr[i], arr[pivot]);
                break;
            }
        }

        reverse(arr + pivot + 1, arr + sizes);
    }

    else
    {
        reverse(arr, arr + sizes);
    }

    for (auto it : arr)
        cout << it << " ";
    cout << endl;
    for (auto it : brr)
        cout << it << " ";
}