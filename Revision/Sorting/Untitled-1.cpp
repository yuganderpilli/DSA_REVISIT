#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int i = start+1;
    int j = end;
    while (i < j)
    {
        while ((i <= end) && (arr[i] <= pivot))
        {
            i++;
        }
        while ((j >= start+1) && (arr[j] > pivot))
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
          
        }
    }
    swap(arr[start], arr[j]);
    return j;
}
void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int p = partition(arr, start, end);
        quickSort(arr, start, p - 1);
        quickSort(arr, p + 1, end);
    }
}
int main()
{
    int arr[] = {7, 8, 9, 1, 2, 3, 6, 5, 4};
    int sizes = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, sizes - 1);
    for (auto it : arr)
    {
        cout << it << " ";
    }
}